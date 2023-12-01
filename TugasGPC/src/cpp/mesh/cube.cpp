#include "object.h"

Cube::Cube(Object* obj) : MeshRenderer(obj) {}

void Cube::shape(float x, float y, float z, float scalex, float scaley, float scalez , std::vector<double> color)
{
    glColor3d(color.at(0), color.at(1), color.at(2));

    glPushMatrix();

    glTranslatef(x, y, z);

    glRotatef(MeshRenderer::object->rotateX, 1.0f, 0.0f, 0.0f);
    glRotatef(MeshRenderer::object->rotateY, 0.0f, 1.0f, 0.0f);

    glScalef(scalex, scaley, scalez);

    glRotatef(0.0, 0.0f, 0.0f, 0.0f);
    glRotatef(0.0, 0.0f, 0.0f, 0.0f);
    glRotatef(0.0f, 0.0f, 0.0f, 0.0f);

    glBegin(GL_QUADS);

    // front
    glNormal3f(0.0f, 0.0f, 1.0f);
    glTexCoord2f(0.0, 0.0); glVertex3f(-0.5f, -0.5f, 0.5f);
    glTexCoord2f(1.0, 0.0); glVertex3f(0.5f, -0.5f, 0.5f);
    glTexCoord2f(1.0, 1.0); glVertex3f(0.5f, 0.5f, 0.5f);
    glTexCoord2f(0.0, 1.0); glVertex3f(-0.5f, 0.5f, 0.5f);

    // Back face
    glNormal3f(0.0f, 0.0f, -1.0f);
    glVertex3f(-0.5f, -0.5f, -0.5f);
    glVertex3f(-0.5f, 0.5f, -0.5f);
    glVertex3f(0.5f, 0.5f, -0.5f);
    glVertex3f(0.5f, -0.5f, -0.5f);

    // Top face
    glNormal3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-0.5f, 0.5f, -0.5f);
    glVertex3f(-0.5f, 0.5f, 0.5f);
    glVertex3f(0.5f, 0.5f, 0.5f);
    glVertex3f(0.5f, 0.5f, -0.5f);

    // Bottom face
    glNormal3f(0.0f, -1.0f, 0.0f);
    glTexCoord2f(0.0, 0.0); glVertex3f(-0.5f, -0.5f, -0.5f);
    glTexCoord2f(1.0, 0.0); glVertex3f(0.5f, -0.5f, -0.5f);
    glTexCoord2f(1.0, 1.0); glVertex3f(0.5f, -0.5f, 0.5f);
    glTexCoord2f(0.0, 1.0); glVertex3f(-0.5f, -0.5f, 0.5f);

    // Right face
    glNormal3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.5f, -0.5f, -0.5f);
    glVertex3f(0.5f, 0.5f, -0.5f);
    glVertex3f(0.5f, 0.5f, 0.5f);
    glVertex3f(0.5f, -0.5f, 0.5f);

    // Left face
    glNormal3f(-1.0f, 0.0f, 0.0f);
    glVertex3f(-0.5f, -0.5f, -0.5f);
    glVertex3f(-0.5f, -0.5f, 0.5f);
    glVertex3f(-0.5f, 0.5f, 0.5f);
    glVertex3f(-0.5f, 0.5f, -0.5f);

    glEnd();
    glPopMatrix();
}
void Cube::renderMesh() {
    shape(MeshRenderer::object->positionX, MeshRenderer::object->positionY, MeshRenderer::object->positionZ,MeshRenderer::object->scaleX, MeshRenderer::object->scaleY, MeshRenderer::object->scaleZ, MeshRenderer::object->color);
}

