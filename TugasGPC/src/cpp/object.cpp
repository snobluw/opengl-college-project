#include "object.h"

Object::Object() {
    mesh = new Cube(this);
}

void Object::renderObject(){
     mesh->renderMesh();
}

void Object::setParent(Object* parent) {
    this->positionX = parent->positionX + localPositionX;
    this->positionY = parent->positionY + localPositionY;
    this->positionZ = parent->positionZ + localPositionZ;
    this->rotateX = parent->rotateX;
    this->rotateY = parent->rotateY;
    this->rotateZ = parent->rotateZ;
    this->scale = parent->scale;
    //add obj to list of child
}