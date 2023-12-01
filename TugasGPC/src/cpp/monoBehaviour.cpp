#include "monoBehaviour.h"

void MonoBehaviour::start() {}
void MonoBehaviour::update() {}

Object* MonoBehaviour::getObject(Object* obj)
{
    std::list<Object*>::iterator it = objects.begin();

    int i = 0;
    while (i != obj->id)
    {
        advance(it, i);

        i++;
    }

    return *it;
}
void MonoBehaviour::Destroy(Object* obj) {

    objects.remove(obj);
}
void MonoBehaviour::addObject(Object* obj, float x, float y, float z,float scalex, float scaley, float scalez)
{
    obj->id = objects.size() + 1;
    obj->positionX = x;
    obj->positionY = y;
    obj->positionZ = z;
    obj->scaleX = scalex;
    obj->scaleY = scaley;
    obj->scaleZ = scalez;
    obj->localPositionX = x;
    obj->localPositionY = y;
    obj->localPositionZ = z;
    objects.push_back(obj);
}

void MonoBehaviour::addObject(Object* obj, float x, float y, float z)
{
    obj->id = objects.size() + 1;
    obj->positionX = x;
    obj->positionY = y;
    obj->positionZ = z;
    obj->scale = 1;
    obj->localPositionX = x;
    obj->localPositionY = y;
    obj->localPositionZ = z;
    objects.push_back(obj);
}