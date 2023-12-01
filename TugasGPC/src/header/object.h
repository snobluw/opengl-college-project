#include <GL/glut.h>
#include <vector>
#include <iostream>
#include <soil.h>

class MeshRenderer;
class Component;


class Object
{
public:
    int id = 0;
    //transform tr
    //vector2 position
    //vector2 localPos
    float positionX = 0;
    float positionY = 0;
    float positionZ = 0;
    float rotateX = 0;
    float rotateY = 0;
    float rotateZ = 0;
    float scale = 1.0f;
    float scaleX = 1.0f;
    float scaleY = 1.0f;
    float scaleZ = 1.0f;
    std::vector<double> color = {1,1,1};
    float localScale = 0;
    float localPositionX = 0;
    float localPositionY = 0;
    float localPositionZ = 0;

    //Component* component;
    //list of child/ type = obj

    MeshRenderer* mesh;

    Object();

    void renderObject();

    void setParent(Object* parent);
};

class Component {

};

class MeshRenderer : public Component
{
public:

    Object* object;

    MeshRenderer(Object* obj);

    virtual void renderMesh();
    virtual void test();
};

class Square : public MeshRenderer
{
public:
    Square(Object* obj);

    void shape(float x1, float y1, float sidelength);
    void test();
    void renderMesh();

};

class Sphere : public MeshRenderer
{
public:
    Sphere(Object* obj);

    void shape(float radius, int slices, int stacks);
    void test();
    void renderMesh();

};

class Cube : public MeshRenderer
{
public:
    Cube(Object* obj);
    void shape(float, float, float,float,std::vector<double>);
    void shape(float, float, float, float,float,float, std::vector<double>);
    void renderMesh();

};