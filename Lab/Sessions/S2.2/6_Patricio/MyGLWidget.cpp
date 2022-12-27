// MyGLWidget.cpp
#include "MyGLWidget.h"
#include <iostream>
#include <stdio.h>

#define printOpenGLError() printOglError(__FILE__, __LINE__)
#define CHECK() printOglError(__FILE__, __LINE__,__FUNCTION__)
#define DEBUG() std::cout << __FILE__ << " " << __LINE__ << " " << __FUNCTION__ << std::endl;

int MyGLWidget::printOglError(const char file[], int line, const char func[])
{
    GLenum glErr;
    int    retCode = 0;

    glErr = glGetError();
    const char * error = 0;
    switch (glErr)
    {
        case 0x0500:
            error = "GL_INVALID_ENUM";
            break;
        case 0x501:
            error = "GL_INVALID_VALUE";
            break;
        case 0x502:
            error = "GL_INVALID_OPERATION";
            break;
        case 0x503:
            error = "GL_STACK_OVERFLOW";
            break;
        case 0x504:
            error = "GL_STACK_UNDERFLOW";
            break;
        case 0x505:
            error = "GL_OUT_OF_MEMORY";
            break;
        default:
            error = "unknown error!";
    }
    if (glErr != GL_NO_ERROR)
    {
        printf("glError in file %s @ line %d: %s function: %s\n",
                             file, line, error, func);
        retCode = 1;
    }
    return retCode;
}

void MyGLWidget::initializeGL()
{
  BL2GLWidget::initializeGL();
  glEnable (GL_DEPTH_TEST);
  ini_camera();
}

void MyGLWidget::paintGL()
{
  // En cas de voler canviar els paràmetres del viewport, descomenteu la crida següent i
  // useu els paràmetres que considereu (els que hi ha són els de per defecte)
  //  glViewport (0, 0, ample, alt);

  // Esborrem el frame-buffer
  glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  // Carreguem la transformació de model
  modelTransformPatricio();
  // Activem el VAO per a pintar el Patricio
  glBindVertexArray(VAO_Patricio);
  // pintem
  glDrawArrays(GL_TRIANGLES, 0, n_vertexs * 3);

  // Carreguem la transformació de model
  modelTransformTerra();
  // Activem el VAO per a pintar la "Casa" (terra)
  glBindVertexArray(VAO_Casa);
  // pintem
  glDrawArrays(GL_TRIANGLES, 0, n_vertexs * 3);

  glBindVertexArray(0);
}

void MyGLWidget::creaBuffers()
{
  m.load("../models/Patricio.obj");
  n_vertexs = m.faces ().size () * 3;

  // Creació del Vertex Array Object per pintar
  glGenVertexArrays(1, &VAO_Patricio);
  glBindVertexArray(VAO_Patricio);

  GLuint VBO_Patricio[2];
  glGenBuffers(2, VBO_Patricio);
  glBindBuffer(GL_ARRAY_BUFFER, VBO_Patricio[0]);
  glBufferData(GL_ARRAY_BUFFER, sizeof(GLfloat) * n_vertexs * 3, m.VBO_vertices(), GL_STATIC_DRAW);

  // Activem l'atribut vertexLoc
  glVertexAttribPointer(vertexLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
  glEnableVertexAttribArray(vertexLoc);

  glBindBuffer(GL_ARRAY_BUFFER, VBO_Patricio[1]);
  glBufferData(GL_ARRAY_BUFFER, sizeof(GLfloat) * n_vertexs * 3, m.VBO_matdiff(), GL_STATIC_DRAW);

  // Activem l'atribut colorLoc
  glVertexAttribPointer(colorLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
  glEnableVertexAttribArray(colorLoc);

  glBindVertexArray (0);

  //------------------

  // Dades de la caseta
  // Dos VBOs, un amb posició i l'altre amb color
  glm::vec3 posicio[6] = {
  glm::vec3(-0.5, -0.5, 0),
  glm::vec3( 0.5, 0.5, 0),
  glm::vec3(-0.5,  0.5, 0),
  glm::vec3(-0.5,  -0.5, 0),
  glm::vec3( 0.5, -0.5, 0),
  glm::vec3( 0.5,  0.5, 0),
  };
  glm::vec3 color[6] = {
  glm::vec3(0,1,1),
  glm::vec3(0,1,1),
  glm::vec3(0,1,1),
  glm::vec3(0,1,1),
  glm::vec3(0,1,1),
  glm::vec3(0,1,1),
  };

  // Creació del Vertex Array Object per pintar
  glGenVertexArrays(1, &VAO_Casa);
  glBindVertexArray(VAO_Casa);

  GLuint VBO_Casa[2];
  glGenBuffers(2, VBO_Casa);
  glBindBuffer(GL_ARRAY_BUFFER, VBO_Casa[0]);
  glBufferData(GL_ARRAY_BUFFER, sizeof(posicio), posicio, GL_STATIC_DRAW);

  // Activem l'atribut vertexLoc
  glVertexAttribPointer(vertexLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
  glEnableVertexAttribArray(vertexLoc);

  glBindBuffer(GL_ARRAY_BUFFER, VBO_Casa[1]);
  glBufferData(GL_ARRAY_BUFFER, sizeof(color), color, GL_STATIC_DRAW);

  // Activem l'atribut colorLoc
  glVertexAttribPointer(colorLoc, 3, GL_FLOAT, GL_FALSE, 0, 0);
  glEnableVertexAttribArray(colorLoc);

  glBindVertexArray (0);
}

void MyGLWidget::carregaShaders()
{
  BL2GLWidget::carregaShaders();
  projLoc = glGetUniformLocation(program->programId(), "proj");
  viewLoc = glGetUniformLocation (program->programId(), "view");
}

void MyGLWidget::projectTransform () {
  // glm::perspective (FOV en radians, ra window , znear, zfar)
  //glm::mat4 Proj = glm::ortho (left, right, bottom, top, ZNear, ZFar)
  glm::mat4 Proj;
  if (optica == 0) Proj = glm::perspective (FOV, ra, znear, zfar);
  else             Proj = glm::ortho (left, right, bottom, top, znear, zfar);
  glUniformMatrix4fv (projLoc, 1, GL_FALSE, &Proj[0][0]);
  //std::cerr << "Prespective: " << optica << std::endl;
}

void MyGLWidget::viewTransform()
{
  //glm::lookAt(OBS, VRP, UP);
  glm::mat4 View = glm::lookAt(OBS, VRP, up);
  glUniformMatrix4fv(viewLoc, 1, GL_FALSE, &View[0][0]);
}

void MyGLWidget::ini_camera()
{
  computeModelBox(min, max);
  computeCenterAndRadius(min, max);//(glm::vec3(-2,-1,-2), glm::vec3(2,1,2));

  float dist = 2*radius;

  optica = 0;
  left = -radius; right = radius;
  bottom = -radius; top = radius;

  OBS = glm::vec3(0, 2, dist);//glm::vec3(center[0], center[1], center[2]+dist);
  VRP = glm::vec3(0,0,0);//center;
  up = glm::vec3(0,1,0);
  FOV = FOVini = 2*glm::asin(radius/dist);//float(M_PI)/2.0f;
  ra = 1.0f;
  znear = radius;
  zfar = 3*radius;

  std::cerr << "Dist: " << dist << " - " << "FOV: " << FOV << "\n";

  projectTransform();
  viewTransform();
}

void MyGLWidget::computeModelBox(glm::vec3& min, glm::vec3& max)
{
  min[0] = max[0] = m.vertices()[0];  //x
  min[1] = max[1] = m.vertices()[1];  //y
  min[2] = max[2] = m.vertices()[2];  //z
  for (unsigned int i = 3; i < m.vertices().size(); i+=3)
  {
    if (m.vertices()[i] < min[0]) min[0] = m.vertices()[i];
    if (m.vertices()[i] > max[0]) max[0] = m.vertices()[i];
    if (m.vertices()[i+1] < min[1]) min[1] = m.vertices()[i+1];
    if (m.vertices()[i+1] > max[1]) max[1] = m.vertices()[i+1];
    if (m.vertices()[i+2] < min[2]) min[2] = m.vertices()[i+2];
    if (m.vertices()[i+2] > max[2]) max[2] = m.vertices()[i+2];
  }
}

void MyGLWidget::computeCenterAndRadius(glm::vec3 minim, glm::vec3 maxim)
{
  center = (minim+maxim)/2.0f;
  radius = glm::length(center-maxim);
  std::cerr << "Center: (" << center[0] <<","<< center[1] << ","<< center[2] << ")\n";
  std::cerr << "Radius: " << radius << std::endl;
}

void MyGLWidget::modelTransformPatricio()
{
  // Matriu de transformació de model
  glm::mat4 transform (1.0f);
  transform = glm::scale(transform, glm::vec3(escala));
  transform = glm::rotate(transform, rotacio, glm::vec3(0,1,0));

  transform = glm::translate(transform, glm::vec3(0,2,0));
  transform = glm::scale(transform, glm::vec3(4/(max[1]-min[1]))); //Volem que faci 4 d'altura
  transform = glm::translate(transform, -center);
  glUniformMatrix4fv(transLoc, 1, GL_FALSE, &transform[0][0]);
}

void MyGLWidget::modelTransformTerra()
{
  // Matriu de transformació de model
  glm::mat4 transform (1.0f);
  transform = glm::scale(transform, glm::vec3(escala));

  transform = glm::rotate(transform, (float)M_PI/2, glm::vec3(1,0,0));
  transform = glm::scale(transform, glm::vec3(5,5,5));
  glUniformMatrix4fv(transLoc, 1, GL_FALSE, &transform[0][0]);
}

void MyGLWidget::resizeGL(int w, int h)
{
  ra = float(w)/float(h);
  if(optica == 0)
  {
    if (ra < 1) FOV = 2*glm::atan(glm::tan(FOVini/2.0)/ra);
  }
  else
  {
    if(ra > 1) {
      left = -radius*ra;
      right = radius*ra;
    }
    else {
      bottom = -radius/ra;//-(radius+inc_amp/2);
      top = radius/ra;//(radius+inc_amp/2);
    }
  }
  projectTransform();
}

void MyGLWidget::keyPressEvent(QKeyEvent* event)
{
  makeCurrent();
  switch (event->key()) {
    case Qt::Key_S: { // escalar a més gran
      escala += 0.05;
      break;
    }
    case Qt::Key_D: { // escalar a més petit
      escala -= 0.05;
      break;
    }
    case Qt::Key_R: { // rotem
      rotacio += (float)M_PI/4;
      break;
    }
    case Qt::Key_O: { // rotem
      optica = (optica+1)%2;
      projectTransform();
      break;
    }
    default: event->ignore(); break;
  }
  update();
}

MyGLWidget::~MyGLWidget() {
}
