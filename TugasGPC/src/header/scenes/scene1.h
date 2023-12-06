#include "monoBehaviour.h"
#include <stdio.h>
#include <vector>

using namespace std;

class Scene1 : public MonoBehaviour
{
public:

    vector<Object*> House_Fence;
    vector<Object*> House_Roof_1;
    vector<Object*> House_Roof_Half;
    vector<Object*> House_Step_Half;
    vector<Object*> House_Wood_1;
    vector<Object*> House_Wood_2;
    vector<Object*> House_Glass;
    vector<Object*> Dirt;

    Object* door;
    Object* road;
    
    void start();
    void update();
};
