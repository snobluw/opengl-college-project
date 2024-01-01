#include "monoBehaviour.h"
#include <stdio.h>
#include <vector>

using namespace std;

class Scene2 : public MonoBehaviour
{
public:

    vector<Object*> sand;
    vector<Object*> water;
    vector<Object*> grass;
    vector<Object*> cloud;
    vector<Object*> tree_leaf;
    vector<Object*> tree_wood;
    vector<Object*> wind_road;
    vector<Object*> wind_wing;
    vector<Object*> wind_door;
    vector<Object*> wind_wood_1;
    vector<Object*> wind_wood_2;
    vector<Object*> house_glass;
    vector<Object*> house_roof_half;
    vector<Object*> house_wood_1;
    vector<Object*> house_wood_2;
    vector<Object*> house_fence;

    void start();
    void update();
};
