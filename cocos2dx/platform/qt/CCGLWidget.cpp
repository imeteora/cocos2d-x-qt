#include <QtCore/QTimer>
#include "CCGLWidget.h"
#include "CCEGLView.h"

GLWidget::GLWidget(QWidget *parent, int width, int height, CCDirector* director )
    : QGLWidget(QGLFormat(QGL::SampleBuffers), parent)
    , mouseMoveFunc(NULL)
    , mousePressFunc(NULL)
    , mouseReleaseFunc(NULL)
    , viewResizeFunc(NULL)
//    , m_director(director)
{
    m_director = director == NULL ? CCDirector::sharedDirector() : director;

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1000 / 60);

    resize(width, height);
}

void GLWidget::setMouseMoveFunc(PTRFUN_MOUSE func)
{
    mouseMoveFunc = func;
}

void GLWidget::setMousePressFunc(PTRFUN_MOUSE func)
{
    mousePressFunc = func;
}

void GLWidget::setMouseReleaseFunc(PTRFUN_MOUSE func)
{
    mouseReleaseFunc = func;
}

void GLWidget::setViewResizeFunc(PTRFUNC_RESIZE func)
{
    viewResizeFunc = func;
}

void GLWidget::mouseMoveEvent(QMouseEvent *event)
{
    CCLOG("%s(%d):%s called", __FILE__, __LINE__, __FUNCTION__);
    if (mouseMoveFunc)
        mouseMoveFunc(event);

    QGLWidget::mouseMoveEvent(event);
}

void GLWidget::mousePressEvent(QMouseEvent *event)
{
    CCLOG("%s(%d):%s called", __FILE__, __LINE__, __FUNCTION__);
    if (mousePressFunc)
        mousePressFunc(event);

    QGLWidget::mousePressEvent(event);
}

void GLWidget::mouseReleaseEvent(QMouseEvent *event)
{
    CCLOG("%s(%d):%s called", __FILE__, __LINE__, __FUNCTION__);
    if (mouseReleaseFunc)
        mouseReleaseFunc(event);

    QGLWidget::mouseReleaseEvent(event);
}

void GLWidget::resizeEvent(QResizeEvent *event)
{
    CCLOG("%s(%d):%s called", __FILE__, __LINE__, __FUNCTION__);
    if ( viewResizeFunc ) {
        viewResizeFunc(event);
    }
    if ( m_director ) {
//        m_director->reshapeProjection(CCSizeMake( size().width(), size().height()) );
        m_director->getOpenGLView()->setDesignResolutionSize(size().width(), size().height(), kResolutionShowAll);
    }
    QGLWidget::resizeEvent(event);
}

void GLWidget::update()
{
    glInit();
    makeCurrent();

    if (m_director)
        m_director->mainLoop();

    doneCurrent();
}
