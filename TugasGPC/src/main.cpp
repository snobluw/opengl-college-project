#include <GL/freeglut.h>
#include "scenes/rifqiScenes.h"
#include "scenes/scene1.h"
#include <cmath>

//memilih scene yang akan di render
MonoBehaviour *monobehavior = new Scene1();

float zoomFactor = 1.0f;
float targetZoom = 1.0f;

float translateX = 0.0f;
float translateY = 0.0f;

float targetTranslateX = 0.0f;
float targetTranslateY = 0.0f;

float angleX = 0.0f;
float angleY = 0.0f;
float lastX = 0.0f;
float lastY = 0.0f;

bool mousePressed = false;

bool isWPressed = false;
bool isAPressed = false;
bool isSPressed = false;
bool isDPressed = false;


void display();
void reshape(int,int);
void frameUpdater(int);
void drawScene();
void mouseWheelCallback(int, int, int, int);
void smoothZoom();
void keyboardCallback(unsigned char, int, int);
void keyboardUpCallback(unsigned char, int, int);
void smoothTranslate();
void mouse(int, int, int, int);
void motion(int, int);



void init() 
{
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_NORMALIZE);

    glClearColor(0.8f, 0.8f, 0.8f, 1.0f);

    GLfloat lightDirection[] = { -1.0f, 0.6f, 0.8f, 0.0f };  // Directional light from the positive diagonal
    glLightfv(GL_LIGHT0, GL_POSITION, lightDirection);

    GLfloat ambientIntensity[] = { 0.2f, 0.2f, 0.2f, 1.0f };
    GLfloat diffuseIntensity[] = { 0.8f, 0.8f, 0.8f, 1.0f };
    GLfloat specularIntensity[] = { 1.0f, 1.0f, 1.0f, 1.0f };

    glLightfv(GL_LIGHT0, GL_AMBIENT, ambientIntensity);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseIntensity);
    glLightfv(GL_LIGHT0, GL_SPECULAR, specularIntensity);

}

int main(int argc, char** argv) 
{
    monobehavior->start();

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA| GLUT_DEPTH);

    glutInitWindowPosition(200, 100);
    glutInitWindowSize(500, 500);

    glutCreateWindow("TugasGPC");

    init();

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutTimerFunc(0, frameUpdater, 0);

    glutIdleFunc(smoothZoom);
    glutMouseWheelFunc(mouseWheelCallback);
    glutKeyboardFunc(keyboardCallback);
    glutKeyboardUpFunc(keyboardUpCallback);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);

    glutMainLoop();

    return 0;
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glLoadIdentity();

    glRotatef(angleX, 1.0f, 0.0f, 0.0f);
    glRotatef(angleY, 0.0f, 1.0f, 0.0f);

    glScaled(zoomFactor, zoomFactor, zoomFactor);
    glTranslated(translateX, translateY, 0.0f);
    smoothTranslate();

    drawScene();

    glutSwapBuffers();
}



void reshape(int width, int height) 
{
    glViewport(0, 0, (GLsizei)width, (GLsizei)height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    width = glutGet(GLUT_WINDOW_WIDTH);
    height = glutGet(GLUT_WINDOW_HEIGHT);

    float aspect_ratio = (float)width / height;

    gluPerspective(50.0, aspect_ratio, 0.1, 100.0);
    gluLookAt(3.0, 3.0, 8.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void frameUpdater(int) 
{
    glutPostRedisplay();
    glutTimerFunc(1000 / 60, frameUpdater, 0);

    monobehavior->update();

}

void drawScene() 
{
    //render objek untuk setiap objek yang ada pada scene
    for (Object* object : monobehavior->objects) {

        object->renderObject();
    }
}

void mouseWheelCallback(int wheel, int direction, int x, int y)
{
    const float zoomSpeed = 0.1f;
    targetZoom = (direction > 0) ? zoomFactor * 1.3f : zoomFactor / 1.3f;
}


void smoothZoom()
{
    const float zoomSpeed = 0.1f;
    float delta = targetZoom - zoomFactor;

    if (std::abs(delta) > 0.001f)
    {
        zoomFactor += delta * zoomSpeed;
        glutPostRedisplay();
    }
}

void keyboardCallback(unsigned char key, int x, int y)
{

    switch (key)
    {
    case 'w':
        isWPressed = true;
        break;
    case 'a':
        isAPressed = true;
        break;
    case 's':
        isSPressed = true;
        break;
    case 'd':
        isDPressed = true;
        break;
    }

    glutPostRedisplay();
}

void keyboardUpCallback(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'w':
        isWPressed = false;
        break;
    case 'a':
        isAPressed = false;
        break;
    case 's':
        isSPressed = false;
        break;
    case 'd':
        isDPressed = false;
        break;
    }
}

void smoothTranslate()
{
    const float translationSpeed = 0.05f;

    if (isWPressed)
        targetTranslateY += translationSpeed;
    if (isAPressed)
        targetTranslateX -= translationSpeed;
    if (isSPressed)
        targetTranslateY -= translationSpeed;
    if (isDPressed)
        targetTranslateX += translationSpeed;

    float deltaX = targetTranslateX - translateX;
    float deltaY = targetTranslateY - translateY;

    if (std::abs(deltaX) > 0.05f || std::abs(deltaY) > 0.05f)
    {
        translateX += deltaX * translationSpeed;
        translateY += deltaY * translationSpeed;
    }
}

void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON) {
        if (state == GLUT_DOWN) {
            mousePressed = true;
            lastX = x;
            lastY = y;
        }
        else if (state == GLUT_UP) {
            mousePressed = false;
        }
    }
}

void motion(int x, int y) {
    if (mousePressed) {
        angleY += (x - lastX) * 0.2f;
        angleX += (y - lastY) * 0.2f;

        lastX = x;
        lastY = y;

        glutPostRedisplay();
    }
}