#include "monoBehaviour.h"

class RifqiScene : public MonoBehaviour
{
public:

#pragma region plans
    //property :
    //* list obj // bertambah pada saat obj diadd
    //method :
#pragma endregion

    Object* parrentTerrain = new Object;
    Object* child = new Object();

    std::vector<Object*> terrain_mud;
    std::vector<Object*> terrain_grass;

    void start();
    void update();
};
