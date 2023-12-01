#include "scenes/rifqiScenes.h"
#include <vector>
#include "colors.h"

void RifqiScene::start() {

    int lenght = 20;
    int currentlenght = 0;

    for (int i = 0; i < lenght; i++) {

        for (int j = 0 + currentlenght ; j < lenght + currentlenght; j++) {
            terrain_mud.push_back(new Object);
            terrain_mud.at(j)->color.assign({ 0.678, 0.447, 0.263 });

            addObject(terrain_mud.at(j), j - currentlenght, 0, i, 1,1,1);
        }

        currentlenght += lenght;
    }

    int lenght2 = 20;
    int currentlenght2 = 0;

    for (int i = 0; i < lenght2; i++) {

        for (int j = 0 + currentlenght2; j < lenght2 + currentlenght2; j++) {
            terrain_grass.push_back(new Object);
            terrain_grass.at(j)->color.assign({ 0.463, 0.839, 0.373 });

            addObject(terrain_grass.at(j), j - currentlenght2, 1, i, 1,1,1);
        }

        currentlenght2 += lenght2;
    }

    parrentTerrain->scale -= 0.2;
}

void RifqiScene::update() {
    parrentTerrain->rotateY -= 0.5f;
    parrentTerrain->rotateX += 0.5f;

    for (Object* mud : terrain_mud) {
        mud->setParent(parrentTerrain);
    }
    for (Object* grass : terrain_grass) {
        grass->setParent(parrentTerrain);
    }
}