/****************************************************************************
Copyright (c) 2012 cocos2d-x.org

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include "CCEGLView.h"
#include "CCDirector.h"
#include "CCSet.h"
#include "ccMacros.h"
#include "CCTouch.h"
#include "CCTouchDispatcher.h"
#include "CCIMEDispatcher.h"
#include "CCGLWidget.h"

NS_CC_BEGIN

static CCEGLView* s_pMainWindow = NULL;

void mouseMove(QMouseEvent *event)
{
    CCLOG("%s(%d):%s called", __FILE__, __LINE__, __FUNCTION__);
    s_pMainWindow->mouseMove(event);
}

void mousePress(QMouseEvent *event)
{
    CCLOG("%s(%d):%s called", __FILE__, __LINE__, __FUNCTION__);
    s_pMainWindow->mousePress(event);
}

void mouseRelease(QMouseEvent *event)
{
    CCLOG("%s(%d):%s called", __FILE__, __LINE__, __FUNCTION__);
    s_pMainWindow->mouseRelease(event);
}

void viewResize(QResizeEvent *event )
{
    CCLOG("%s(%d):%s called", __FILE__, __LINE__, __FUNCTION__);
    s_pMainWindow->viewResize(event);
}

CCEGLView::CCEGLView()
    : CCEGLViewProtocol()
    , m_bCaptured(false)
    , m_bOrientationReverted(false)
    , m_bOrientationInitVertical(false)
    , m_pDelegate(NULL)
    , bIsInit(false)
    , m_eInitOrientation(CCDeviceOrientationPortrait)
    , m_fScreenScaleFactor(1.0f)
    , m_window(NULL)
    , m_bIsSubWindow(false)
{
	m_pTouch = new CCTouch;
	m_pSet = new CCSet;
	m_sSizeInPoint.width = m_sSizeInPoint.height = 0;
}

CCEGLView::~CCEGLView()
{
    CC_SAFE_DELETE(m_pTouch);
    CC_SAFE_DELETE(m_pSet);
}

bool CCEGLView::Create(int iWidth, int iHeight)
{
    m_window = new GLWidget(NULL, iWidth,iHeight, CCDirector::sharedDirector());

    m_window->setMouseMoveFunc(&cocos2d::mouseMove);
    m_window->setMousePressFunc(&cocos2d::mousePress);
    m_window->setMouseReleaseFunc(&cocos2d::mouseRelease);
    m_window->setViewResizeFunc(&cocos2d::viewResize);

    m_window->setWindowFlags(m_window->windowFlags() & ~Qt::WindowMaximizeButtonHint);
    m_window->setFixedSize(iWidth, iHeight);

    m_window->show();

    m_bIsSubWindow = true;

    bIsInit = true;
    s_pMainWindow = this;

    m_sSizeInPoint.width = iWidth;
    m_sSizeInPoint.height = iHeight;
    m_bOrientationInitVertical = (CCDeviceOrientationPortrait == m_eInitOrientation
                || kCCDeviceOrientationPortraitUpsideDown == m_eInitOrientation) ? true : false;

	return true;
}

void CCEGLView::end()
{
    /* Exits from GLFW */
    CCDirector::sharedDirector()->end();
//    glfwTerminate();
    delete this;
    exit(0);
}

bool CCEGLView::SetWindow(GLWidget* window)
{
    if (NULL == window)
        return false;

    CC_SAFE_DELETE(m_window);
    m_window = window;

    m_window->setMouseMoveFunc(&cocos2d::mouseMove);
    m_window->setMousePressFunc(&cocos2d::mousePress);
    m_window->setMouseReleaseFunc(&cocos2d::mouseRelease);
    m_window->setViewResizeFunc(&cocos2d::viewResize);

    bIsInit = true;
    s_pMainWindow = this;

    m_sSizeInPoint.width = m_window->width();
    m_sSizeInPoint.height = m_window->height();

    return true;
}

CCSize CCEGLView::getSize()
{
    return CCSize((float)(m_sSizeInPoint.width), (float)(m_sSizeInPoint.height));
}

bool CCEGLView::isOpenGLReady()
{
	return bIsInit;
}

void CCEGLView::release()
{
    CC_SAFE_DELETE(m_pSet);
    CC_SAFE_DELETE(m_pTouch);
    CC_SAFE_DELETE(m_pDelegate);

    s_pMainWindow = NULL;

    // delete the opengl window only when it is created by CCEGLView::Create()
    if (! m_bIsSubWindow)
        CC_SAFE_DELETE(m_window);

    delete this;
}

void CCEGLView::setTouchDelegate(EGLTouchDelegate * pDelegate) {
	//TODO touch event
	m_pDelegate = pDelegate;

}
void CCEGLView::swapBuffers() {
	if (bIsInit) {
		/* Swap buffers */
        m_window->swapBuffers();
	}
}

int CCEGLView::setDeviceOrientation(int eOritation) {
    do
    {
        bool bVertical = (CCDeviceOrientationPortrait == eOritation ||
                          kCCDeviceOrientationPortraitUpsideDown == eOritation) ? true : false;

        CC_BREAK_IF(m_bOrientationReverted && bVertical != m_bOrientationInitVertical);
        CC_BREAK_IF(! m_bOrientationReverted && bVertical == m_bOrientationInitVertical);

        m_bOrientationReverted = (bVertical == m_bOrientationInitVertical) ? false : true;

        // swap width and height
        QSize size = m_window->size();
        m_window->resize(size.height(), size.width());
    } while (0);

    return m_eInitOrientation;
}

void CCEGLView::setViewPortInPoints(float x, float y, float w, float h) {
//	TODO
    CCLOG("%s(%d):%s called", __FILE__, __LINE__, __FUNCTION__);
//    if (bIsInit)
    {
		float factor = m_fScreenScaleFactor / CC_CONTENT_SCALE_FACTOR();
        glViewport((GLint)(x * factor) + m_rcViewPort.origin.x,
                (GLint)(y * factor) + m_rcViewPort.origin.y,
				(GLint)(w * factor),
				(GLint)(h * factor));
	}
}

void CCEGLView::setScissorInPoints(float x, float y, float w, float h) {
	//TODO
//    if (bIsInit)
    {
		float factor = m_fScreenScaleFactor / CC_CONTENT_SCALE_FACTOR();
        glScissor((GLint)(x * factor) + m_rcViewPort.origin.x,
                (GLint)(y * factor) + m_rcViewPort.origin.y,
				(GLint)(w * factor),
				(GLint)(h * factor));
	}
}

void CCEGLView::setIMEKeyboardState(bool bOpen) {
    CC_UNUSED_PARAM(bOpen);
}

bool CCEGLView::canSetContentScaleFactor() {
	return false;
}

void CCEGLView::setContentScaleFactor(float contentScaleFactor)
{
    CC_UNUSED_PARAM(contentScaleFactor);
	CCLog("could not set contentScaleFactor after initialized");
}

CCEGLView* CCEGLView::sharedOpenGLView()
{
	CC_ASSERT(s_pMainWindow);
    return s_pMainWindow;
}

void CCEGLView::mouseMove(QMouseEvent *event)
{
    CCLOG("%s(%d):%s called", __FILE__, __LINE__, __FUNCTION__);
    if (! m_pDelegate || ! m_pTouch)
        return;

    if (! m_bCaptured)
        return;

    m_pTouch->setTouchInfo(
                0,
                (float)(event->x()) / m_fScreenScaleFactor,
                (float)(event->y()) / m_fScreenScaleFactor);
    m_pDelegate->touchesMoved(m_pSet, NULL);
}

void CCEGLView::mousePress(QMouseEvent *event)
{
    CCLOG("%s(%d):%s called", __FILE__, __LINE__, __FUNCTION__);
    if (! m_pDelegate || ! m_pTouch)
        return;

    if (event->button() != Qt::LeftButton)
        return;

    m_bCaptured = true;

    m_pTouch->setTouchInfo(
                0,
                (float)(event->x()) / m_fScreenScaleFactor,
                (float)(event->y()) / m_fScreenScaleFactor);
    m_pSet->addObject(m_pTouch);
    m_pDelegate->touchesBegan(m_pSet, NULL);
}

void CCEGLView::mouseRelease(QMouseEvent *event)
{
    CCLOG("%s(%d):%s called", __FILE__, __LINE__, __FUNCTION__);
    if (! m_pDelegate || ! m_pTouch)
        return;

    if (event->button() != Qt::LeftButton)
        return;

    m_bCaptured = false;

    m_pTouch->setTouchInfo(
                0,
                (float)(event->x()) / m_fScreenScaleFactor,
                (float)(event->y()) / m_fScreenScaleFactor);
    m_pDelegate->touchesEnded(m_pSet, NULL);
    m_pSet->removeObject(m_pTouch);
}

void CCEGLView::viewResize(QResizeEvent *event )
{
    CCLOG("%s(%d):%s called", __FILE__, __LINE__, __FUNCTION__);
//    if ( !m_pDelegate ) {
//        return;
//    }

    m_sSizeInPoint.width = event->size().width();
    m_sSizeInPoint.height = event->size().height();

    m_window->resize(m_sSizeInPoint.width, m_sSizeInPoint.height);
//    if ( event->oldSize().isEmpty() == false ) {
//        QSize _deltaSize = event->size() - event->oldSize();

//    }
//    setViewPortInPoints
}

void CCEGLView::setDesignResolutionSize(float width, float height, ResolutionPolicy resolutionPolicy)
{
    CCEGLViewProtocol::setDesignResolutionSize(width, height, resolutionPolicy);
    return;
}

NS_CC_END
