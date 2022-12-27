// MyGLWidget.h
#include "BL2GLWidget.h"
#include "model.h"

class MyGLWidget : public BL2GLWidget {
  Q_OBJECT

  public:
    MyGLWidget(QWidget *parent=0) : BL2GLWidget(parent) {}
    ~MyGLWidget();

    virtual void initializeGL();
    virtual void paintGL();

    virtual void carregaShaders();
    virtual void creaBuffers();

    virtual void projectTransform();
    virtual void viewTransform();
    virtual void ini_camera();
    virtual void computeCenterAndRadius(glm::vec3 min, glm::vec3 max);

    virtual void modelTransformHomer();
    virtual void modelTransformTerra();
    virtual void resizeGL(int w, int h);

    virtual void keyPressEvent(QKeyEvent* event);

  private:
    int printOglError(const char file[], int line, const char func[]);

    GLuint projLoc;
    GLuint viewLoc;
    GLuint VAO_Homer;

    float rotacio;
    int n_vertexs;

    glm::vec3 center;
    float radius;
    //glm::vec3 min, max;

    glm::vec3 OBS, VRP, up;
    float FOV, FOVini, ra, znear, zfar;
};
