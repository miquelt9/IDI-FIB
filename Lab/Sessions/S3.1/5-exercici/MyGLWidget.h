// MyGLWidget.h
#include "BL3GLWidget.h"

class MyGLWidget : public BL3GLWidget {
  Q_OBJECT

  public:
    MyGLWidget(QWidget *parent=0) : BL3GLWidget(parent) {}
    ~MyGLWidget();

  protected:
    virtual void mouseMoveEvent(QMouseEvent *e);
    virtual void keyPressEvent(QKeyEvent* event);

  private:
    int printOglError(const char file[], int line, const char func[]);
    void viewTransform();
    void initializeGL();  //La redeclarem ja que sino no cridem carregaShaders, pq en BL3GLWidget no és virtual
    void iniMaterialTerra ();
    void initializeLight();
    void paintGL();
    void carregaShaders();

    // uniform locations
    GLuint colorFocusLoc, llumAmbientLoc, posFocusLoc;
    // iluminació
    glm::vec3 colorFocus, llumAmbient, posFocus;

    float angleX, posXLlum, posZLlum;

};
