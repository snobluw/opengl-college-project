#include "scenes/scene1.h"


void Scene1::start() {

	for (int i = 0; i < 50; i++) {

		House_Fence.push_back(new Object);
		House_Roof_Half.push_back(new Object);
		House_Step_Half.push_back(new Object);
		House_Roof_1.push_back(new Object);
		House_Wood_1.push_back(new Object);
		House_Wood_2.push_back(new Object);
		House_Glass.push_back(new Object);
		Dirt.push_back(new Object);
		door = new Object();
		road = new Object();

		road->color.assign({ 1, 0.871, 0.573 });

		
		House_Fence.at(i)->color.assign({ 0.851, 0.6, 0.369 });
		House_Fence.at(i)->scaleX = 0.10;
		House_Fence.at(i)->scaleY = 1.00;
		House_Fence.at(i)->scaleZ = 0.10;

		Dirt.at(i)->color.assign({ 0.878, 0.647, 0.263 });
		Dirt.at(i)->scaleX = 1;
		Dirt.at(i)->scaleY = 1;
		Dirt.at(i)->scaleZ = 1;

		House_Roof_Half.at(i)->color.assign({ 0.863, 0.639, 0.373 });
		House_Roof_Half.at(i)->scaleX = 1;
		House_Roof_Half.at(i)->scaleY = 0.50;
		House_Roof_Half.at(i)->scaleZ = 0.50;

		House_Step_Half.at(i)->color.assign({ 0.863, 0.839, 0.373 });
		House_Step_Half.at(i)->scaleX = 1;
		House_Step_Half.at(i)->scaleY = 0.50;
		House_Step_Half.at(i)->scaleZ = 1;

		House_Roof_1.at(i)->color.assign({ 0.463, 0.839, 0.973 });
		House_Roof_1.at(i)->scaleX = 1;
		House_Roof_1.at(i)->scaleY = 1;
		House_Roof_1.at(i)->scaleZ = 1;

		House_Wood_1.at(i)->color.assign({ 0.963, 0.039, 0.373 });
		House_Wood_1.at(i)->scaleX = 1;
		House_Wood_1.at(i)->scaleY = 1;
		House_Wood_1.at(i)->scaleZ = 1;

		House_Wood_2.at(i)->color.assign({ 0.563, 0.039, 0.373 });
		House_Wood_2.at(i)->scaleX = 1;
		House_Wood_2.at(i)->scaleY = 1;
		House_Wood_2.at(i)->scaleZ = 1;

		House_Glass.at(i)->color.assign({ 0.003, 0.039, 0.973 });
		House_Glass.at(i)->scaleX = 1;
		House_Glass.at(i)->scaleY = 1;
		House_Glass.at(i)->scaleZ = 1;
	}

	addObject(House_Fence.at(0), 0.49, 1.36, 3.00);
	House_Fence.at(0)->rotateZ += 90.00;
	addObject(House_Fence.at(1), 2.00, 1.00, 3.00);
	addObject(House_Fence.at(2), 0.49, 1.00, 1.00);
	House_Fence.at(2)->rotateZ += 90.00;
	addObject(House_Fence.at(3), -0.51, 1.36, 3.00);
	House_Fence.at(3)->rotateZ += 90.00;
	addObject(House_Fence.at(4), 1.00, 1.00, 1.00);
	addObject(House_Fence.at(5), 0.00, 1.00, 3.00);
	addObject(House_Fence.at(6), 3.00, 1.00, 3.00);
	addObject(House_Fence.at(7), -0.51, 1.36, 1.00);
	House_Fence.at(7)->rotateZ += 90.00;
	addObject(House_Fence.at(8), 0.49, 1.36, 1.00);
	House_Fence.at(8)->rotateZ += 90.00;
	addObject(House_Fence.at(9), -0.51, 1.00, 1.00);
	House_Fence.at(9)->rotateZ += 90.00;
	addObject(House_Fence.at(10), 2.49, 1.00, 3.00);
	House_Fence.at(10)->rotateZ += 90.00;
	addObject(House_Fence.at(11), 1.49, 1.00, 3.00);
	House_Fence.at(11)->rotateZ += 90.00;
	addObject(House_Fence.at(12), 0.49, 1.00, 3.00);
	House_Fence.at(12)->rotateZ += 90.00;
	addObject(House_Fence.at(13), 1.49, 1.36, 1.00);
	House_Fence.at(13)->rotateZ += 90.00;
	addObject(House_Fence.at(14), -0.51, 1.00, 3.00);
	House_Fence.at(14)->rotateZ += 90.00;
	addObject(House_Fence.at(15), 3.00, 1.00, 1.00);
	addObject(House_Fence.at(16), 2.49, 1.36, 1.00);
	House_Fence.at(16)->rotateZ += 90.00;
	addObject(House_Fence.at(17), 2.00, 1.00, 1.00);
	addObject(House_Fence.at(18), 2.49, 1.36, 3.00);
	House_Fence.at(18)->rotateZ += 90.00;

	addObject(House_Roof_Half.at(0), -2.00, 4.24, 0.25);
	addObject(House_Roof_Half.at(1), -4.00, 5.24, 1.25);
	addObject(House_Roof_Half.at(2), -3.00, 4.75, 3.00, 1.00, 0.50, 1.00);
	House_Roof_Half.at(2)->rotateY += 180;
	addObject(House_Roof_Half.at(3), -2.00, 4.75, 3.00, 1.00, 0.50, 1.00);
	House_Roof_Half.at(3)->rotateY += 180;
	addObject(House_Roof_Half.at(4), -3.00, 3.75, 0.00, 1.00, 0.50, 1.00);
	addObject(House_Roof_Half.at(5), -1.00, 5.24, 2.75);
	House_Roof_Half.at(5)->rotateY += 180;
	addObject(House_Roof_Half.at(6), 0.00, 3.75, 0.00, 1.00, 0.50, 1.00);
	addObject(House_Roof_Half.at(7), -4.00, 4.24, 0.25);
	addObject(House_Roof_Half.at(8), -3.00, 4.75, 1.00, 1.00, 0.50, 1.00);
	addObject(House_Roof_Half.at(9), -5.00, 4.75, 3.00, 1.00, 0.50, 1.00);
	House_Roof_Half.at(9)->rotateY += 180;
	addObject(House_Roof_Half.at(10), -4.00, 4.75, 3.00, 1.00, 0.50, 1.00);
	House_Roof_Half.at(10)->rotateY += 180;
	addObject(House_Roof_Half.at(11), -2.00, 5.24, 1.25);
	addObject(House_Roof_Half.at(12), -3.00, 5.24, 2.75);
	House_Roof_Half.at(12)->rotateY += 180;
	addObject(House_Roof_Half.at(13), -2.00, 4.24, 3.75);
	House_Roof_Half.at(13)->rotateY += 180;
	addObject(House_Roof_Half.at(14), -4.00, 4.75, 1.00, 1.00, 0.50, 1.00);
	addObject(House_Roof_Half.at(15), -5.00, 4.24, 0.25);
	addObject(House_Roof_Half.at(16), -1.00, 4.24, 3.75);
	House_Roof_Half.at(16)->rotateY += 180;
	addObject(House_Roof_Half.at(17), -4.00, 5.24, 2.75);
	House_Roof_Half.at(17)->rotateY += 180;
	addObject(House_Roof_Half.at(18), -5.00, 4.24, 3.75);
	House_Roof_Half.at(18)->rotateY += 180;
	addObject(House_Roof_Half.at(19), 0.00, 5.24, 1.25);
	addObject(House_Roof_Half.at(20), -2.00, 3.75, 4.00, 1.00, 0.50, 1.00);
	House_Roof_Half.at(20)->rotateY += 180;
	addObject(House_Roof_Half.at(21), -3.00, 4.24, 3.75);
	House_Roof_Half.at(21)->rotateY += 180;
	addObject(House_Roof_Half.at(22), -5.00, 5.24, 2.75);
	House_Roof_Half.at(22)->rotateY += 180;
	addObject(House_Roof_Half.at(23), 0.00, 5.24, 2.75);
	House_Roof_Half.at(23)->rotateY += 180;
	addObject(House_Roof_Half.at(24), -4.00, 3.75, 0.00, 1.00, 0.50, 1.00);
	addObject(House_Roof_Half.at(25), -2.00, 3.75, 0.00, 1.00, 0.50, 1.00);
	addObject(House_Roof_Half.at(26), -1.00, 3.75, 4.00, 1.00, 0.50, 1.00);
	House_Roof_Half.at(26)->rotateY += 180;
	addObject(House_Roof_Half.at(27), -3.00, 5.24, 1.25);
	addObject(House_Roof_Half.at(28), -1.00, 4.75, 3.00, 1.00, 0.50, 1.00);
	House_Roof_Half.at(28)->rotateY += 180;
	addObject(House_Roof_Half.at(29), -2.00, 4.75, 1.00, 1.00, 0.50, 1.00);
	addObject(House_Roof_Half.at(30), 0.00, 4.24, 3.75);
	House_Roof_Half.at(30)->rotateY += 180;
	addObject(House_Roof_Half.at(31), -5.00, 3.75, 4.00, 1.00, 0.50, 1.00);
	House_Roof_Half.at(31)->rotateY += 180;
	addObject(House_Roof_Half.at(32), -1.00, 4.75, 1.00, 1.00, 0.50, 1.00);
	addObject(House_Roof_Half.at(33), -5.00, 3.75, 0.00, 1.00, 0.50, 1.00);
	addObject(House_Roof_Half.at(34), 0.00, 4.24, 0.25);
	addObject(House_Roof_Half.at(35), -1.00, 3.75, 0.00, 1.00, 0.50, 1.00);
	addObject(House_Roof_Half.at(36), -4.00, 4.24, 3.75);
	House_Roof_Half.at(36)->rotateY += 180;
	addObject(House_Roof_Half.at(37), -3.00, 4.24, 0.25);
	addObject(House_Roof_Half.at(38), -3.00, 3.75, 4.00, 1.00, 0.50, 1.00);
	House_Roof_Half.at(38)->rotateY += 180;

	addObject(House_Roof_1.at(0), -5.00, 6.00, 2.00);
	addObject(House_Roof_1.at(1), -2.00, 6.00, 2.00);
	addObject(House_Roof_1.at(2), -1.00, 6.00, 2.00);
	addObject(House_Roof_1.at(3), -4.00, 6.00, 2.00);
	addObject(House_Roof_1.at(4), 0.00, 6.00, 2.00);
	addObject(House_Roof_1.at(5), -3.00, 6.00, 2.00);

	addObject(House_Wood_1.at(0), -4.00, 2.00, 4.00);
	addObject(House_Wood_1.at(1), -1.00, 3.00, 0.00);
	addObject(House_Wood_1.at(2), -1.00, 2.00, 0.00);
	addObject(House_Wood_1.at(3), -4.00, 2.00, 0.00);
	addObject(House_Wood_1.at(4), -4.00, 1.00, 0.00);
	addObject(House_Wood_1.at(5), -4.00, 3.00, 0.00);
	addObject(House_Wood_1.at(6), -4.00, 1.00, 4.00);
	addObject(House_Wood_1.at(7), -1.00, 1.00, 0.00);
	addObject(House_Wood_1.at(8), -1.00, 1.00, 4.00);
	addObject(House_Wood_1.at(9), -4.00, 3.00, 4.00);
	addObject(House_Wood_1.at(10), -1.00, 2.00, 4.00);

	addObject(House_Wood_2.at(0), -1.00, 2.00, 3.00);
	addObject(House_Wood_2.at(1), -2.00, 3.00, 0.00);
	addObject(House_Wood_2.at(2), -4.00, 1.00, 1.00);
	addObject(House_Wood_2.at(3), -3.00, 3.00, 0.00);
	addObject(House_Wood_2.at(4), -2.00, 1.00, 4.00);
	addObject(House_Wood_2.at(5), -1.00, 3.00, 2.00);
	addObject(House_Wood_2.at(6), 0.00, 5.00, 2.00);
	addObject(House_Wood_2.at(7), -3.00, 1.00, 0.00);
	addObject(House_Wood_2.at(8), -1.00, 2.00, 1.00);
	addObject(House_Wood_2.at(9), -4.00, 1.00, 2.00);
	addObject(House_Wood_2.at(10), -2.00, 1.00, 0.00);
	addObject(House_Wood_2.at(11), 0.00, 4.00, 3.00);
	addObject(House_Wood_2.at(12), -5.00, 5.00, 2.00);
	addObject(House_Wood_2.at(13), -5.00, 4.00, 3.00);
	addObject(House_Wood_2.at(14), -1.00, 1.00, 3.00);
	addObject(House_Wood_2.at(15), -4.00, 1.00, 3.00);
	addObject(House_Wood_2.at(16), -4.00, 3.00, 3.00);
	addObject(House_Wood_2.at(17), -1.00, 3.00, 1.00);
	addObject(House_Wood_2.at(18), -3.00, 1.00, 4.00);
	addObject(House_Wood_2.at(19), -4.00, 4.00, 2.00);
	addObject(House_Wood_2.at(20), -1.00, 4.00, 2.00);
	addObject(House_Wood_2.at(21), -5.00, 4.00, 1.00);
	addObject(House_Wood_2.at(22), -1.00, 1.00, 1.00);

	addObject(House_Glass.at(0), -4.00, 2.00, 1.00);
	addObject(House_Glass.at(1), -4.00, 2.00, 3.00);
	addObject(House_Glass.at(2), -4.00, 2.00, 2.00); 
	addObject(House_Glass.at(3), -2.00, 2.00, 4.00);
	addObject(House_Glass.at(4), -2.00, 2.00, 0.00);

	addObject(Dirt.at(0), 0.00, -4.00, 0.00);
	addObject(Dirt.at(1), 0.00, -2.00, 0.00, 7.00, 1.00, 7.00);
	addObject(Dirt.at(2), 0.00, -3.00, 0.00, 3.00, 1.00, 3.00);
	addObject(Dirt.at(3), 0.00, -1.00, 0.00, 11.00, 1.00, 11.00);

	addObject(House_Step_Half.at(0), -4.00, 0.75, 5.00);
	House_Step_Half.at(0)->rotateY += 180.00;
	addObject(House_Step_Half.at(1), -1.00, 0.75, 5.00);
	House_Step_Half.at(1)->rotateY += 180.00;
	addObject(House_Step_Half.at(2), 0.00, 0.75, 4.00);
	House_Step_Half.at(2)->rotateY += 270.00;
	addObject(House_Step_Half.at(3), -4.00, 1.24, -0.75, 1.00, 0.50, 0.50);
	addObject(House_Step_Half.at(4), -1.00, 0.75, -1.00);
	addObject(House_Step_Half.at(5), -1.00, 1.24, 4.75, 1.00, 0.50, 0.50);
	House_Step_Half.at(5)->rotateY += 180.00;
	addObject(House_Step_Half.at(6), -5.00, 0.75, 4.00);
	House_Step_Half.at(6)->rotateY += 90.00;
	addObject(House_Step_Half.at(7), -4.75, 1.24, 0.00, 1.00, 0.50, 0.50);
	House_Step_Half.at(7)->rotateY += 90.00;
	addObject(House_Step_Half.at(8), -0.25, 1.24, 0.00, 1.00, 0.50, 0.50);
	House_Step_Half.at(8)->rotateY += 270.00;
	addObject(House_Step_Half.at(9), -0.25, 1.24, 4.00, 1.00, 0.50, 0.50);
	House_Step_Half.at(9)->rotateY += 270.00;
	addObject(House_Step_Half.at(10), -4.00, 0.75, -1.00);
	addObject(House_Step_Half.at(11), -5.00, 0.75, 0.00);
	House_Step_Half.at(11)->rotateY += 90.00;
	addObject(House_Step_Half.at(12), 0.00, 0.75, 0.00);
	House_Step_Half.at(12)->rotateY += 270.00;
	addObject(House_Step_Half.at(13), -1.00, 1.24, -0.75, 1.00, 0.50, 0.50);
	addObject(House_Step_Half.at(14), -4.75, 1.24, 4.00, 1.00, 0.50, 0.50);
	House_Step_Half.at(14)->rotateY += 90.00;
	addObject(House_Step_Half.at(15), -4.00, 1.24, 4.75, 1.00, 0.50, 0.50);
	House_Step_Half.at(15)->rotateY += 180.00;

	addObject(door, -1.00, 1.50, 2.00, 0.04, 2.00, 1.00);

	addObject(road, 1.69, 0.51, 2.00, 1.00, 0.10, 6.00);
	road->rotateY += 270;
}

void Scene1::update() {


}