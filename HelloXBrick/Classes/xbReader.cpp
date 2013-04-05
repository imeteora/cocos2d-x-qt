#ifdef XBRICK
#include "helper.h"
#endif

#include "xbreader.h"

static XBReader s_sharedReader;

XBReader* XBReader::sharedReader()
{
    return &s_sharedReader;
}

CCNode* XBReader::nodeFromFile(const char *pFile)
{
    const char* szFullPath = CCFileUtils::fullPathFromRelativePath(pFile);
    CCDictionary<std::string, CCObject*> *dict = CCFileUtils::dictionaryWithContentsOfFileThreadSafe(szFullPath);

    CCAssert(dict != NULL, "XBReader file not found");

    XBDictionary *graph = (XBDictionary*)dict->objectForKey("graph");

    CCAssert(graph != NULL, "graph element is empty");
    CCNode* node = nodeFromDictionary(graph);
    dict->release();

    return node;
}

CCNode* XBReader::nodeFromDictionary(XBDictionary *dictionary)
{
    const char* className = valueForKey("class", dictionary);
    XBArray *children = (XBArray*)dictionary->objectForKey("children");
    XBDictionary *props = (XBDictionary*)dictionary->objectForKey("properties");

    CCNode* node = NULL;

    if (strcmp(className, "CCNode") == 0)
    {
        node = new CCNode;
        setPropForCCNode(node, props);
    } else if (strcmp(className, "CCSprite") == 0)
    {
        node = new CCSprite;
        CCSprite* sprite = dynamic_cast<CCSprite*>(node);

        setPropForSprite(sprite, props);
        setPropForCCNode(sprite, props);
    } else if (strcmp(className, "CCLayer") == 0)
    {
        node = new CCLayer;
        setPropForCCNode(node, props);
        setPropForCCLayer(dynamic_cast<CCLayer*>(node), props);
    } else if (strcmp(className, "CCLayerColor") == 0)
    {
        node = new CCLayerColor;

        CCLayerColor* layerColor = dynamic_cast<CCLayerColor*>(node);
        setPropForCCNode(layerColor, props);
        setPropForCCLayer(layerColor, props);
        setPropForCCLayerColor(layerColor, props);
    } else if (strcmp(className, "CCLayerGradient") == 0)
    {
        node = new CCLayerGradient;

        CCLayerGradient* layerGradient = dynamic_cast<CCLayerGradient*>(node);
        setPropForCCNode(layerGradient, props);
        setPropForCCLayer(layerGradient, props);
        setPropForCCLayerColor(layerGradient, props);
        setPropForCCLayerGradient(layerGradient, props);
    } else if (strcmp(className, "CCParticleSystem") == 0)
    {
        const char* plistFile = valueForKey("plistFile", props);

        node = new CCParticleSystemQuad;
        CCParticleSystem* particleSystem = dynamic_cast<CCParticleSystem*>(node);

        if (strcmp(plistFile, "") == 0)
        {
            // particleSystem only be edited by the other third party tool NOW
            return NULL;
            setPropForCCNode(node, props);
            setPropForCCParticleSystem(particleSystem, props);
        } else
        {
            // maybe the particlesystem is designed in the other third party tool
            // it will generate a .plist file
            setPropForCCNode(node, props);

            particleSystem->initWithFile(plistFile);

#ifdef XBRICK
            Helper::getSingleton().setParticleSystemFileName(particleSystem, plistFile);
#endif
        }
    } else if (strcmp(className, "CCMenu") == 0)
    {
        node = new CCMenu;
        CCMenu* menu = dynamic_cast<CCMenu*>(node);
        setPropForMenu(menu, props);
        setPropForCCNode(menu, props);
    } else if (strcmp(className, "CCMenuItemImage") == 0)
    {
        node = new CCMenuItemImage;

        CCMenuItemImage* itemImage = dynamic_cast<CCMenuItemImage*>(node);
        setPropForItemImage(itemImage, props);
        setPropForMenuItem(itemImage, props);
    } else if (strcmp(className, "CCLabelBMFont") == 0)
    {
        node = new CCLabelBMFont;
        CCLabelBMFont* bmFont = dynamic_cast<CCLabelBMFont*>(node);
        setPropForBMFont(bmFont, props);
        setPropForCCNode(node, props);
    } else
    {
        // unknown class
        CCLog("%s is not a know type to cocos2d-x.");
    }

    if (! node)
        return NULL;

    node->autorelease();

#ifdef XBRICK
    const char* nodeName = valueForKey("name", dictionary);
    Helper::getSingleton().setNodeName(node, nodeName);
#endif

    // Add children
    for (unsigned int i = 0; i < children->count(); i++)
    {
        XBDictionary* childDict = (XBDictionary*)children->getObjectAtIndex(i);
        CCNode* childNode = nodeFromDictionary(childDict);

        if (! childNode)
            continue;

        node->addChild(childNode, atoi(valueForKey("zOrder", childDict)));
    }

    return node;
}

void XBReader::setPropForCCNode(CCNode* node, XBDictionary* props)
{
    node->setPosition(pointFromDict("position", props));

    if (! dynamic_cast<CCSprite*>(node) &&
        ! dynamic_cast<CCMenuItemImage*>(node) &&
        ! dynamic_cast<CCLabelBMFont*>(node) &&
        ! dynamic_cast<CCParticleSystem*>(node))
        node->setContentSize(sizeFromDict("contentSize", props));

    node->setScaleX((float)atof(valueForKey("scaleX", props)));
    node->setScaleY((float)atof(valueForKey("scaleY", props)));

    CCPoint p = pointFromDict("anchorPoint", props);
    node->setAnchorPoint(p);

    node->setRotation((float)atof(valueForKey("rotation", props)));

    node->setIsRelativeAnchorPoint(boolFromDict("isRelativeAnchorPoint", props));

    node->setIsVisible(boolFromDict("visible", props));

    node->setTag(atoi(valueForKey("tag", props)));
}

void XBReader::setPropForSprite(CCSprite* sprite, XBDictionary* props)
{
    const char* spriteFile = valueForKey("spriteFile", props);
    sprite->initWithFile(spriteFile);

#ifdef XBRICK
        // register sprite name
        Helper::getSingleton().setSpriteFileName(sprite, spriteFile);
#endif

    ccColor4B color = color4bFromDict("color", props);
    sprite->setColor(ccc3(color.r, color.g, color.b));
    sprite->setOpacity(color.a);

    sprite->setBlendFunc(blendFuncFromDict("blendFunc", props));

    sprite->setFlipX(boolFromDict("flipX", props));
    sprite->setFlipY(boolFromDict("flipY", props));
}

void XBReader::setPropForCCLayer(CCLayer* layer, XBDictionary* props)
{
    layer->setIsTouchEnabled(boolFromDict("touchEnabled", props));
    layer->setIsAccelerometerEnabled(boolFromDict("accelerometerEnabled", props));
    layer->setIsKeypadEnabled(boolFromDict("keypadEnabled", props));
}

void XBReader::setPropForCCLayerColor(CCLayerColor* layerColor, XBDictionary* props)
{
    ccColor4B color = color4bFromDict("color", props);
    layerColor->setColor(ccc3(color.r, color.g, color.b));
    layerColor->setOpacity(color.a);

    layerColor->setBlendFunc(blendFuncFromDict("blendFunc", props));
}

void XBReader::setPropForCCLayerGradient(CCLayerGradient* layerGradient, XBDictionary* props)
{
    layerGradient->initWithColor(color4bFromDict("color", props),
                                 color4bFromDict("endColor", props),
                                 pointFromDict("vector", props));
}

void XBReader::setPropForCCParticleSystem(CCParticleSystem* particleSystem, XBDictionary* props)
{
    particleSystem->initWithTotalParticles(atoi(valueForKey("totalParticles", props)));

    // setTexture must be called first
    particleSystem->setTexture(CCTextureCache::sharedTextureCache()->addImage(valueForKey("textureFile", props)));

    particleSystem->setDuration(atof(valueForKey("duration", props)));

    int emitterMode = atoi(valueForKey("emitterMode", props));
    particleSystem->setEmitterMode(emitterMode);

    if (emitterMode == kCCParticleModeGravity)
    {
        particleSystem->setGravity(pointFromDict("gravity", props));
        particleSystem->setAngle(atof(valueForKey("angle", props)));
        particleSystem->setAngleVar(atof(valueForKey("angleVar", props)));
        particleSystem->setSpeed(atof(valueForKey("speed", props)));
        particleSystem->setSpeedVar(atof(valueForKey("speedVar", props)));
        particleSystem->setRadialAccel(atof(valueForKey("radialAccel", props)));
        particleSystem->setRadialAccelVar(atof(valueForKey("radialAccelVar", props)));
        particleSystem->setTangentialAccel(atof(valueForKey("tangentialAccel", props)));
        particleSystem->setTangentialAccelVar(atof(valueForKey("tangentialAccelVar", props)));
    } else
    {
        particleSystem->setStartRadius(atof(valueForKey("startRadius", props)));
        particleSystem->setStartRadiusVar(atof(valueForKey("startRadiusVar", props)));
        particleSystem->setEndRadius(atof(valueForKey("endRadius", props)));
        particleSystem->setEndRadiusVar(atof(valueForKey("endRadiusVar", props)));
        particleSystem->setRotatePerSecond(atof(valueForKey("rotatePerSecond", props)));
        particleSystem->setRotatePerSecondVar(atof(valueForKey("rotatePerSecondVar", props)));
    }

    particleSystem->setPosVar(pointFromDict("posVar", props));
    particleSystem->setLife(atof(valueForKey("life", props)));
    particleSystem->setLifeVar(atof(valueForKey("lifeVar", props)));

    particleSystem->setStartSpin(atof(valueForKey("startSpin", props)));
    particleSystem->setStartSpinVar(atof(valueForKey("startSpinVar", props)));
    particleSystem->setEndSpin(atof(valueForKey("endSpin", props)));
    particleSystem->setEndSpinVar(atof(valueForKey("endSpinVar", props)));

    particleSystem->setStartColor(color4fFromDict("startColor", props));
    particleSystem->setStartColorVar(color4fFromDict("startColorVar", props));
    particleSystem->setEndColor(color4fFromDict("endColor", props));
    particleSystem->setEndColorVar(color4fFromDict("endColorVar", props));

    particleSystem->setStartSize(atof(valueForKey("startSize", props)));
    particleSystem->setStartSizeVar(atof(valueForKey("startSizeVar", props)));
    particleSystem->setEndSize(atof(valueForKey("endSize", props)));
    particleSystem->setEndSizeVar(atof(valueForKey("endSizeVar", props)));

    particleSystem->setBlendFunc(blendFuncFromDict("blendFunc", props));

    particleSystem->setEmissionRate(atof(valueForKey("emissionRate", props)));
    particleSystem->setPositionType(kCCPositionTypeGrouped);
    particleSystem->setIsBlendAdditive(true);
}

void XBReader::setPropForBMFont(CCLabelBMFont* bmFont, XBDictionary* props)
{
    const char* str = valueForKey("string", props);
    const char* fontFile = valueForKey("fontFile", props);
    bmFont->initWithString(str, fontFile);

#ifdef XBRICK
    Helper::getSingleton().setFontFileName(bmFont, fontFile);
#endif
}

void XBReader::setPropForMenu(CCMenu* menu, XBDictionary* props)
{
    menu->initWithItems(NULL, NULL);
}

void XBReader::setPropForMenuItem(CCMenuItem* menuItem, XBDictionary* props)
{
    menuItem->setIsEnabled(boolFromDict("Enabled", props));
}

void XBReader::setPropForItemImage(CCMenuItemImage* itemImage, XBDictionary* props)
{
    const char* normalImage = valueForKey("spriteFileNormal", props);
    const char* disabledImage = valueForKey("spriteFileDisabled", props);
    const char* selectedImage = valueForKey("spriteFileSelected", props);

#ifdef XBRICK
    Helper::getSingleton().setItemImageFiles(itemImage, normalImage, selectedImage, disabledImage);
#endif

    // Please change last two parameters to yours
    itemImage->initFromNormalImage(normalImage, selectedImage, disabledImage, NULL, NULL);
}
