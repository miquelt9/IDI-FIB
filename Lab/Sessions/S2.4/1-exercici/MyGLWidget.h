// MyGLWidget.h
#include "BL2GLWidget.h"
#include "model.h"
#define GLM_FORCE_RADIANS

class MyGLWidget : public BL2GLWidget {
  Q_OBJECT

  public:
    MyGLWidget(QWidget *parent=0) : BL2GLWidget(parent) {}
    ~MyGLWidget();

  protected:
    virtual void carregaShaders ();
    virtual void initializeGL ( );
    virtual void paintGL ( );
    virtual void keyPressEvent (QKeyEvent *event);
    virtual void mousePressEvent (QMouseEvent *event);
    virtual void modelTransform1 ();
    virtual void modelTransform2 ();
    virtual void modelTransform3 ();
    virtual void resizeGL (int width, int height);
    virtual void mouseMoveEvent( QMouseEvent* event );

    Model m;

    GLuint projLoc, viewLoc, VAO_homer, VAO_Terra;

    glm::vec3 OBS, VRP, up, min_value, max_value, center;
    QPoint ini_pos;
    float FOV, ra, znear, zfar, radi, distance, proj_top, proj_bottom, proj_left, proj_right, prewidth, preheight;
    float rotation_angle = 0;
    float angle_x = 0;
    float angle_y = 0;
    float inc = 0;
    bool perspective_view = true;

  private:
    int printOglError(const char file[], int line, const char func[]);
    void projMatrixTransform();
    void viewMatrixTransform();
    void ini_camera();
    void CreaBuffersHomer();
    void CreaBuffersTerra();
    void modelTransformTerra();
    void initialize_min_max();
    //void update_min_max(glm::vec3 posicio[]);
    void calculate_center_distance();
    void zoom();

    public slots:
      void setZoom(int num);

    signals:
      void getZoom(int);

};
