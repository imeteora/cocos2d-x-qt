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

#ifndef CCEGLVIEWQT_H_
#define CCEGLVIEWQT_H_

#include <QMouseEvent>

#include "CCGL.h"
#include "CCCommon.h"
#include "CCGeometry.h"

class GLWidget;

NS_CC_BEGIN

class CCSet;
class CCTouch;
class EGLTouchDelegate;

extern void mouseMove(QMouseEvent *);
extern void mousePress(QMouseEvent *);
extern void mouseRelease(QMouseEvent *);
extern void viewResize(QResizeEvent *);

class CC_DLL CCEGLView
{
public:
	CCEGLView();
	virtual ~CCEGLView();

    // Create opengl window
    bool Create(int iWidth, int iHeight);

    // Set opengl window
    bool SetWindow(GLWidget* window);

	CCSize getSize();
	bool isOpenGLReady();
	void release();
	void setTouchDelegate(EGLTouchDelegate * pDelegate);
	void swapBuffers();
	bool canSetContentScaleFactor();
	void setContentScaleFactor(float contentScaleFactor);

    float getMainScreenScale() { return 1.0f; }

	int setDeviceOrientation(int eOritation);
	void setViewPortInPoints(float x, float y, float w, float h);
	void setScissorInPoints(float x, float y, float w, float h);

	void setIMEKeyboardState(bool bOpen);

    void mouseMove(QMouseEvent *event);
    void mousePress(QMouseEvent *event);
    void mouseRelease(QMouseEvent *event);
    void viewResize(QResizeEvent *);

	/**
	 @brief	get the shared main open gl window
	 */
	static CCEGLView& sharedOpenGLView();
private:

	bool m_bCaptured;
	bool m_bOrientationReverted;
	bool m_bOrientationInitVertical;
	CCSet * m_pSet;
    CCTouch * m_pTouch;

	//store current mouse point for moving, valid if and only if the mouse pressed
	CCPoint m_mousePoint;

    EGLTouchDelegate * m_pDelegate;

	CCSize m_sSizeInPoint;
	CCRect m_rcViewPort;

	bool bIsInit;
	int m_eInitOrientation;
	float m_fScreenScaleFactor;

    GLWidget* m_window;
    bool m_bIsSubWindow;
};

NS_CC_END

#endif /* CCEGLVIEWQT_H_ */
