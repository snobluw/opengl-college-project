#include "object.h"

Square::Square(Object* obj) : MeshRenderer(obj) {}

void Square::shape(float x1, float y1, float sidelength)
{
    double halfside = sidelength / 2;

    glColor3f(1, 1, 1);
    glPushMatrix();

    glScalef(1,1, 1);

    glBegin(GL_POLYGON);

    glVertex2d(x1 + halfside, y1 + halfside);
    glVertex2d(x1 + halfside, y1 - halfside);
    glVertex2d(x1 - halfside, y1 - halfside);
    glVertex2d(x1 - halfside, y1 + halfside);

    glEnd();
    glPopMatrix();
}
void Square::test() {
    std::cout << "ini kotak";
}
void Square::renderMesh(){
    shape(MeshRenderer::object->positionX, MeshRenderer::object->positionY, (float)MeshRenderer::object->scale + MeshRenderer::object->localScale);
}