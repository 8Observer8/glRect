#include "Scene.h"

Scene::Scene( QWidget *parent ) :
    QGLWidget( parent )
{
}

void Scene::initializeGL()
{
    glClearColor( 0.0f, 0.0f, 1.0f, 1.0f );
}

void Scene::paintGL()
{
    glClear( GL_COLOR_BUFFER_BIT );

    glColor3f( 1.0f, 0.0f, 0.0f );

    glRectf( -25.0f, 25.0f, 25.0f, -25.0f );
}

void Scene::resizeGL(int w, int h)
{
    if ( h == 0 ) {
        h = 1;
    }
    glViewport( 0, 0, w, h );

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();

    GLfloat aspectRatio = ( GLfloat ) w / ( GLfloat ) h;

    if ( w <= h ) {
        glOrtho( -100.0, 100.0, -100.0 / aspectRatio, 100.0 / aspectRatio,
                 1.0, -1.0 );
    } else {
        glOrtho( -100.0 * aspectRatio, 100.0 * aspectRatio, -100.0, 100.0,
                 1.0, -1.0 );
    }
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
}
