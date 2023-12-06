#include "scenes/scene2.h"

void Scene2::start() {

	for (int i = 0; i < 100; i++) {
		dirt.push_back(new Object);
		grass.push_back(new Object);
		dirt.at(i)->color.assign({ 0.678, 0.447, 0.263 });
		dirt.at(i)->scaleX = 1;
		dirt.at(i)->scaleY = 0.8;
		dirt.at(i)->scaleZ = 1;
		grass.at(i)->color.assign({ 0.463, 0.839, 0.373 });
		grass.at(i)->scaleX = 1;
		grass.at(i)->scaleY = 0.2;
		grass.at(i)->scaleZ = 1;
	}

	addObject(dirt.at(0), -4.00, -1.00, 1.00);
	addObject(dirt.at(1), -3.00, -1.00, 2.00);
	addObject(dirt.at(2), -2.00, -1.00, 3.00);
}

void Scene2::update() {}