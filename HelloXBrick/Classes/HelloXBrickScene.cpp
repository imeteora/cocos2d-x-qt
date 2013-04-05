#include "HelloXBrickScene.h"
#include "xbReader.h"

USING_NS_CC;

CCScene* HelloXBrick::scene()
{
	// 'scene' is an autorelease object
	CCScene *scene = CCScene::node();
	
	// 'layer' is an autorelease object
	HelloXBrick *layer = HelloXBrick::node();

	// add layer as a child to scene
	scene->addChild(layer);

	// return the scene
	return scene;
}

// on "init" you need to initialize your instance
bool HelloXBrick::init()
{
	//////////////////////////////
	// 1. super init first
	if ( !CCLayer::init() )
	{
		return false;
	}

    CCNode* pNode = XBReader::sharedReader()->nodeFromFile("example.xb");

	// add the node as a child to this layer
	this->addChild(pNode, 0);
	
	return true;
}

void HelloXBrick::menuCloseCallback(CCObject* pSender)
{
	CCDirector::sharedDirector()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	exit(0);
#endif
}
