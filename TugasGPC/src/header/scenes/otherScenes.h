#include "monoBehaviour.h"
#include <stdio.h>
#include <vector>

using namespace std;

class OtherScene : public MonoBehaviour
{
public:

    vector<Object*> mud;
    vector<Object*> grass;
    
    void start();
    void update();
};
