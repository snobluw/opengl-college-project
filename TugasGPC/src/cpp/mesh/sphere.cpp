#include "object.h"

Sphere::Sphere(Object* obj) : MeshRenderer(obj) {}

void Sphere::shape(float radius, int slices, int stacks) {

        glColor3d(1, 1, 1);

        glPushMatrix();

        glTranslatef(MeshRenderer::object->positionX, MeshRenderer::object->positionY, 0);
        glScalef(MeshRenderer::object->scale + MeshRenderer::object->localScale, MeshRenderer::object->scale + MeshRenderer::object->localScale, MeshRenderer::object->scale + MeshRenderer::object->localScale);

        glutSolidSphere(radius, slices, stacks);

        glPopMatrix();
}
void Sphere::test() {

    std::cout << "ini lingkaran";
}
void Sphere::renderMesh() {
    shape(1.0f, 30, 30);
}