#include "scenes/otherScenes.h"


void OtherScene::start() {

	for (int i = 0; i < 100; i++) {
		mud.push_back(new Object);
		grass.push_back(new Object);
		mud.at(i)->color.assign({ 0.678, 0.447, 0.263 });
		mud.at(i)->scaleX = 1;
		mud.at(i)->scaleY = 0.8;
		mud.at(i)->scaleZ = 1;
		grass.at(i)->color.assign({ 0.463, 0.839, 0.373 });
		grass.at(i)->scaleX = 1;
		grass.at(i)->scaleY = 0.2;
		grass.at(i)->scaleZ = 1;
	}

	addObject(mud.at(0),0,0,0);
	addObject(grass.at(0), 0, 0.5, 0);
}

void OtherScene::update() {}