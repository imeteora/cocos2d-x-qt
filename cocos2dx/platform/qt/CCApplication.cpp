#include <QtCore/QTimer>
#include "CCApplication.h"
#include "CCDirector.h"
#include "CCEGLView.h"


NS_CC_BEGIN

// sharedApplication pointer
CCApplication * CCApplication::sm_pSharedApplication = 0;

CCApplication::CCApplication(int argc, char *argv[])
    : QApplication(argc, argv)
{
    m_nAnimationInterval = 0;
    CC_ASSERT(! sm_pSharedApplication);
    sm_pSharedApplication = this;
}

CCApplication::~CCApplication()
{
    CC_ASSERT(this == sm_pSharedApplication);
    sm_pSharedApplication = NULL;
}

int CCApplication::run()
{
    // Initialize instance and cocos2d.
    if (! initInstance() || ! applicationDidFinishLaunching())
    {
        return 0;
    }

    return cocos2d::CCApplication::sharedApplication()->exec();
}

void CCApplication::setAnimationInterval(double interval)
{
    CC_UNUSED_PARAM(interval);
}

CCApplication::Orientation CCApplication::setOrientation(Orientation orientation)
{
    // swap width and height
    CCEGLView * pView = CCDirector::sharedDirector()->getOpenGLView();
    if (pView) {
        return (Orientation)pView->setDeviceOrientation(orientation);
    }
//    return (Orientation)CCDirector::sharedDirector()->getDeviceOrientation();
}

void CCApplication::statusBarFrame(CCRect * rect)
{
    if (rect)
    {
        // Windows doesn't have status bar.
        *rect = CCRectMake(0, 0, 0, 0);
    }
}

//////////////////////////////////////////////////////////////////////////
// static member function
//////////////////////////////////////////////////////////////////////////
CCApplication* CCApplication::sharedApplication()
{
    CC_ASSERT(sm_pSharedApplication);
    return sm_pSharedApplication;
}

ccLanguageType CCApplication::getCurrentLanguage()
{
    ccLanguageType ret = kLanguageEnglish;

    return ret;
}

NS_CC_END;
