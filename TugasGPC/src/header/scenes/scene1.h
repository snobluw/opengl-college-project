#include "monoBehaviour.h"
#include <stdio.h>
#include <vector>

using namespace std;

class Scene1 : public MonoBehaviour
{
public:

    vector<Object*> dirt;
    vector<Object*> grass;
    
    void start();
    void update();
};
