#ifndef XBREADER_H
#define XBREADER_H

#include "cocos2d.h"
USING_NS_CC;

typedef CCMutableArray<CCObject*> XBArray;
typedef CCDictionary<std::string, CCObject*> XBDictionary;

class XBReader
{
public:
    static XBReader* sharedReader();

    CCNode* nodeFromFile(const char *pFile);
    CCNode* nodeFromDictionary(XBDictionary *dictionary);

    /** return the string found by key in dict.
    @return "" if not found; return the string if found.
    */
    inline const char * valueForKey(std::string key, XBDictionary *dict)
    {
        CCAssert(dict, "dict must not be null");

        CCString *pString = (CCString*)dict->objectForKey(key);
        return pString ? pString->m_sString.c_str() : "";
    }

    inline ccBlendFunc blendFuncFromDict(std::string key, XBDictionary* dict)
    {
        CCAssert(dict, "dict must not be null");

        ccBlendFunc blendFunc;
        blendFunc.src = 0;
        blendFunc.dst = 0;

        XBArray *arr = (XBArray*)dict->objectForKey(key);

        if (! arr)
            return blendFunc;

        CCString *srcStr = (CCString*)arr->getObjectAtIndex(0);
        CCString *dstStr = (CCString*)arr->getObjectAtIndex(1);

        blendFunc.src = (float)atof(srcStr->m_sString.c_str());
        blendFunc.dst = (float)atof(dstStr->m_sString.c_str());

        return blendFunc;
    }

    inline bool boolFromDict(std::string key, XBDictionary* dict)
    {
        CCAssert(dict, "dict must not be null");

        CCString *pString = (CCString*)dict->objectForKey(key);
        return (bool)pString->toInt();
    }

    inline ccColor4B color4bFromDict(std::string key, XBDictionary* dict)
    {
        CCAssert(dict, "dict must not be null");

        XBArray *arr = (XBArray*)dict->objectForKey(key);

        if (! arr)
            return ccc4(0, 0, 0, 0);

        CCString *rStr = (CCString*)arr->getObjectAtIndex(0);
        CCString *gStr = (CCString*)arr->getObjectAtIndex(1);
        CCString *bStr = (CCString*)arr->getObjectAtIndex(2);
        CCString *aStr = (CCString*)arr->getObjectAtIndex(3);

        int r = atoi(rStr->toStdString().c_str());
        int g = atoi(gStr->toStdString().c_str());
        int b = atoi(bStr->toStdString().c_str());
        int a = atoi(aStr->toStdString().c_str());

        return ccc4(r, g, b, a);
    }

    inline ccColor4F color4fFromDict(std::string key, XBDictionary* dict)
    {
        CCAssert(dict, "dict must not be null");

        XBArray *arr = (XBArray*)dict->objectForKey(key);

        ccColor4F color;
        color.r = 0;
        color.g = 0;
        color.b = 0;
        color.a = 0;

        if (! arr)
            return color;

        CCString *rStr = (CCString*)arr->getObjectAtIndex(0);
        CCString *gStr = (CCString*)arr->getObjectAtIndex(1);
        CCString *bStr = (CCString*)arr->getObjectAtIndex(2);
        CCString *aStr = (CCString*)arr->getObjectAtIndex(3);

        color.r = atof(rStr->toStdString().c_str());
        color.g = atof(gStr->toStdString().c_str());
        color.b = atof(bStr->toStdString().c_str());
        color.a = atof(aStr->toStdString().c_str());

        return color;
    }

    inline CCPoint pointFromDict(std::string key, XBDictionary* dict)
    {
        CCAssert(dict, "dict must not be null");

        XBArray *arr = (XBArray*)dict->objectForKey(key);

        if (! arr)
            return ccp(0, 0);

        CCString *xStr = (CCString*)arr->getObjectAtIndex(0);
        CCString *yStr = (CCString*)arr->getObjectAtIndex(1);

        float x = (float)atof(xStr->m_sString.c_str());
        float y = (float)atof(yStr->m_sString.c_str());

        return ccp(x, y);
    }

    inline CCSize sizeFromDict(std::string key, XBDictionary* dict)
    {
        CCAssert(dict, "dict must not be null");

        XBArray *arr = (XBArray*)dict->objectForKey(key);

        if (! arr)
            return CCSize(0, 0);

        CCString *wStr = (CCString*)arr->getObjectAtIndex(0);
        CCString *hStr = (CCString*)arr->getObjectAtIndex(1);

        float w = (float)atof(wStr->m_sString.c_str());
        float h = (float)atof(hStr->m_sString.c_str());

        return CCSize(w, h);
    }

    // set properties for different classes, not use virtual function
    // because don't want add any feature to the cocos2d-x
    void setPropForCCNode(CCNode* node, XBDictionary* props);
    void setPropForSprite(CCSprite* sprite, XBDictionary* props);
    void setPropForCCLayer(CCLayer* layer, XBDictionary* props);
    void setPropForCCLayerColor(CCLayerColor* layerColor, XBDictionary* props);
    void setPropForCCLayerGradient(CCLayerGradient* layerGradient, XBDictionary* props);
    void setPropForCCParticleSystem(CCParticleSystem* particleSystem, XBDictionary* props);
    void setPropForBMFont(CCLabelBMFont* bmFont, XBDictionary* props);
    void setPropForMenu(CCMenu* menu, XBDictionary* props);
    void setPropForMenuItem(CCMenuItem* menuItem, XBDictionary* props);
    void setPropForItemImage(CCMenuItemImage* itemImage, XBDictionary* props);
};

#endif // XBREADER_H
