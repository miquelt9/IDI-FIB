#define GLM_FORCE_RADIANS
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLWidget>
#include <QOpenGLShader>
#include <QOpenGLShaderProgram>
#include "glm/glm.hpp"
#include <QKeyEvent>
#include "glm/gtc/matrix_transform.hpp"

class MyGLWidget : public QOpenGLWidget, protected QOpenGLFunctions_3_3_Core
{
  Q_OBJECT

  public:
    MyGLWidget (QWidget *parent=0);
    ~MyGLWidget ();

  protected:
    // initializeGL - Aqui incluim les inicialitzacions del contexte grafic.
    virtual void initializeGL ();

    // paintGL - Mètode cridat cada cop que cal refrescar la finestra.
    // Tot el que es dibuixa es dibuixa aqui.
    virtual void paintGL ();

    // per saber els events de teclat
    virtual void keyPressEvent(QKeyEvent *e);

    // per realitzar transformacions
    virtual void modelTransform();

    // resize - Es cridat quan canvia la mida del widget
    virtual void resizeGL (int width, int height);

  private:
    void creaBuffers ();
    void carregaShaders ();

    // attribute locations
    GLuint vertexLoc;
    //GLuint varLoc;
    GLuint transLoc;
    float rotAng;
    glm::vec3 scl;
    glm::vec3 transVec;

    // Program
    QOpenGLShaderProgram *program;

    GLuint VAO1;
    GLint ample, alt;
};
