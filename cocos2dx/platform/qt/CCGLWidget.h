#ifndef  _GL_WIDGET_H_
#define  _GL_WIDGET_H_

#include "CCDirector.h"
#include "CCCommon.h"
#undef CursorShape
#include <QtOpenGL/QGLWidget>

USING_NS_CC;

class CC_DLL GLWidget : public QGLWidget
{
    Q_OBJECT

    typedef void(*PTRFUN_MOUSE)(QMouseEvent *event);
    typedef void(*PTRFUNC_RESIZE)(QResizeEvent *event);

public:
//    GLWidget(QWidget *parent = 0){}
    GLWidget(QWidget *parent = 0, int width = 800, int height = 600, CCDirector* director = NULL);

    void setMouseMoveFunc(PTRFUN_MOUSE func);
    void setMousePressFunc(PTRFUN_MOUSE func);
    void setMouseReleaseFunc(PTRFUN_MOUSE func);
    void setViewResizeFunc(PTRFUNC_RESIZE func);

protected:
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);

    virtual void resizeEvent(QResizeEvent *);

public slots:
    void update();

private:
    PTRFUN_MOUSE mouseMoveFunc;
    PTRFUN_MOUSE mousePressFunc;
    PTRFUN_MOUSE mouseReleaseFunc;
    PTRFUNC_RESIZE viewResizeFunc;

    CCDirector* m_director;
};

#endif // _GL_WIDGET_H_
