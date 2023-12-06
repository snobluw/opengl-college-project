#include "scenes/scene2.h"

void Scene2::start() {

	for (int i = 0; i < 100; i++) {
		sand.push_back(new Object);
		water.push_back(new Object);
		grass.push_back(new Object);
		cloud.push_back(new Object);
		tree_leaf.push_back(new Object);
		tree_wood.push_back(new Object);
		wind_road.push_back(new Object);
		wind_wing.push_back(new Object);
		wind_door.push_back(new Object);
		wind_wood_1.push_back(new Object);
		wind_wood_2.push_back(new Object);
		house_glass.push_back(new Object);
		house_roof_half.push_back(new Object);
		house_wood_1.push_back(new Object);
		house_wood_2.push_back(new Object);
		house_fence.push_back(new Object);
		sun.push_back(new Object);

		// sand
		sand.at(i)->color.assign({ 0.678, 0.447, 0.263 });
		sand.at(i)->scaleX = 3;
		sand.at(i)->scaleY = 1;
		sand.at(i)->scaleZ = 1;

		// water
		water.at(i)->color.assign({ 0.463, 0.839, 0.373 });
		water.at(i)->scaleX = 3;
		water.at(i)->scaleY = 0.5;
		water.at(i)->scaleZ = 4;

		// grass
		grass.at(i)->color.assign({ 0.678, 0.447, 0.263 });
		grass.at(i)->scaleX = 7;
		grass.at(i)->scaleY = 1;
		grass.at(i)->scaleZ = 5;

		// cloud
		cloud.at(i)->color.assign({ 0.463, 0.839, 0.373 });
		cloud.at(i)->scaleX = 3;
		cloud.at(i)->scaleY = 1;
		cloud.at(i)->scaleZ = -3;

		// tree_leaf
		tree_leaf.at(i)->color.assign({ 0.463, 0.839, 0.373 });
		tree_leaf.at(i)->scaleX = 1;
		tree_leaf.at(i)->scaleY = 1;
		tree_leaf.at(i)->scaleZ = 1;

		// tree_wood
		tree_wood.at(i)->color.assign({ 0.463, 0.839, 0.373 });
		tree_wood.at(i)->scaleX = 1;
		tree_wood.at(i)->scaleY = 1;
		tree_wood.at(i)->scaleZ = 1;

		// wind_road
		wind_road.at(i)->color.assign({ 0.463, 0.839, 0.373 });
		wind_road.at(i)->scaleX = 1;
		wind_road.at(i)->scaleY = 0.1;
		wind_road.at(i)->scaleZ = 2;

		// wind_wing
		wind_wing.at(i)->color.assign({ 0.463, 0.839, 0.373 });
		wind_wing.at(i)->scaleX = 0.1;
		wind_wing.at(i)->scaleY = 6;
		wind_wing.at(i)->scaleZ = 1;

		// wind_door
		wind_door.at(i)->color.assign({ 0.463, 0.839, 0.373 });
		wind_door.at(i)->scaleX = 0.4;
		wind_door.at(i)->scaleY = 2;
		wind_door.at(i)->scaleZ = 1;

		// wind_wood_1
		wind_wood_1.at(i)->color.assign({ 0.463, 0.839, 0.373 });
		wind_wood_1.at(i)->scaleX = 1;
		wind_wood_1.at(i)->scaleY = 1;
		wind_wood_1.at(i)->scaleZ = 1;

		// wind_wood_2
		wind_wood_2.at(i)->color.assign({ 0.463, 0.839, 0.373 });
		wind_wood_2.at(i)->scaleX = 1;
		wind_wood_2.at(i)->scaleY = 1;
		wind_wood_2.at(i)->scaleZ = 1;

		// house_glass
		house_glass.at(i)->color.assign({ 0.463, 0.839, 0.373 });
		house_glass.at(i)->scaleX = 1;
		house_glass.at(i)->scaleY = 1;
		house_glass.at(i)->scaleZ = 1;

		// house_roof_half
		house_roof_half.at(i)->color.assign({ 0.463, 0.839, 0.373 });
		house_roof_half.at(i)->scaleX = 1;
		house_roof_half.at(i)->scaleY = 0.5;
		house_roof_half.at(i)->scaleZ = 0.5;

		// house_wood_1
		house_wood_1.at(i)->color.assign({ 0.463, 0.839, 0.373 });
		house_wood_1.at(i)->scaleX = 1;
		house_wood_1.at(i)->scaleY = 1;
		house_wood_1.at(i)->scaleZ = 1;

		// house_wood_2
		house_wood_2.at(i)->color.assign({ 0.463, 0.839, 0.373 });
		house_wood_2.at(i)->scaleX = 1;
		house_wood_2.at(i)->scaleY = 1;
		house_wood_2.at(i)->scaleZ = 1;
		
		// house_fence
		house_fence.at(i)->color.assign({ 0.463, 0.839, 0.373 });
		house_fence.at(i)->scaleX = 0.1;
		house_fence.at(i)->scaleY = 1;
		house_fence.at(i)->scaleZ = 0.1;
		
		// sun
		sun.at(i)->color.assign({ 0.463, 0.839, 0.373 });
		sun.at(i)->scaleX = 1;
		sun.at(i)->scaleY = 1;
		sun.at(i)->scaleZ = 1;
	}

	// sand
	addObject(sand.at(0), 2.00, 0.00, -3.00);
	addObject(sand.at(1), 4.00, 0.00, -1.00, 1.00, 1.00, 5.00);

	// water
	addObject(water.at(0), 4.00, -0.24, -3.50);

	// grass
	addObject(grass.at(0), -2.00, 0.00, -3.00);
	addObject(grass.at(1), 0.00, 0.00, 2.50, 11.00, 1.00, 6.00);

	// cloud
	addObject(cloud.at(0), 5.00, 12.00, -5.00);
	addObject(cloud.at(1), -5.50, 12.00, 3.00, 6.00, 1.00, -3.00);
	addObject(cloud.at(2), 3.00, 12.00, 7.00, 5.00, 1.00, 1.00);
	addObject(cloud.at(3), 3.50, 12.00, 6.00, 4.00, 1.00, 1.00);
	addObject(cloud.at(4), 3.50, 12.00, 4.00, 6.00, 1.00, -3.00);
	addObject(cloud.at(5), 0.00, 12.00, -1.50, 3.00, 1.00, -2.00);
	addObject(cloud.at(6), -3.00, 12.00, -4.50, 9.00, 1.00, 4.00);

	// tree_leaf
	addObject(tree_leaf.at(0), 4.00, 6.00, 4.00);
	addObject(tree_leaf.at(1), 4.00, 5.00, 3.00);
	addObject(tree_leaf.at(2), 5.00, 5.00, 4.00);
	addObject(tree_leaf.at(3), 5.00, 5.00, 5.00);
	addObject(tree_leaf.at(4), 4.00, 5.00, 5.00);
	addObject(tree_leaf.at(5), 3.00, 5.00, 5.00);
	addObject(tree_leaf.at(6), 3.00, 5.00, 4.00);
	addObject(tree_leaf.at(7), 2.00, 4.00, 4.00);
	addObject(tree_leaf.at(8), 3.00, 4.00, 5.00);
	addObject(tree_leaf.at(9), 3.00, 4.00, 3.00);
	addObject(tree_leaf.at(10), 4.00, 4.00, 2.00);
	addObject(tree_leaf.at(11), 5.00, 4.00, 3.00);
	addObject(tree_leaf.at(12), 6.00, 4.00, 4.00);
	addObject(tree_leaf.at(13), 6.00, 4.00, 5.00);
	addObject(tree_leaf.at(14), 5.00, 4.00, 5.00);
	addObject(tree_leaf.at(15), 4.00, 4.00, 6.00);
	addObject(tree_leaf.at(16), 3.00, 3.00, 4.00);
	addObject(tree_leaf.at(17), 4.00, 3.00, 3.00);
	addObject(tree_leaf.at(18), 5.00, 3.00, 4.00);
	addObject(tree_leaf.at(19), 4.00, 3.00, 5.00);

	// tree_wood
	addObject(tree_wood.at(0), 4.00, 2.00, 4.00);
	addObject(tree_wood.at(1), 4.00, 1.00, 4.00);

	// wind_road
	addObject(wind_road.at(0), -0.31, 0.51, -4.00); // rotate

	// wind_wing
	addObject(wind_wing.at(0), -0.61, 8.00, -4.00); // rotate
	addObject(wind_wing.at(1), -0.61, 8.00, -4.00);

	// wind_door
	addObject(wind_door.at(0), -1.00, 1.50, -4.00);

	// wind_wood_1
	addObject(wind_wood_1.at(0), -3.00, 4.00, -3.00);
	addObject(wind_wood_1.at(1), -3.00, 4.00, -5.00);
	addObject(wind_wood_1.at(2), -4.00, 4.00, -4.00);
	addObject(wind_wood_1.at(3), -1.00, 4.00, -4.00);
	addObject(wind_wood_1.at(4), -2.00, 4.00, -3.00);
	addObject(wind_wood_1.at(5), -2.00, 4.00, -5.00);
	addObject(wind_wood_1.at(6), -3.00, 3.00, -5.00);
	addObject(wind_wood_1.at(7), -2.00, 3.00, -5.00);
	addObject(wind_wood_1.at(8), -2.00, 3.00, -3.00);
	addObject(wind_wood_1.at(9), -3.00, 3.00, -3.00);
	addObject(wind_wood_1.at(10), -4.00, 3.00, -4.00);
	addObject(wind_wood_1.at(11), -1.00, 3.00, -4.00);
	addObject(wind_wood_1.at(12), -4.00, 3.00, -3.00);
	addObject(wind_wood_1.at(13), -4.00, 3.00, -5.00);
	addObject(wind_wood_1.at(14), -1.00, 3.00, -5.00);
	addObject(wind_wood_1.at(15), -1.00, 3.00, -3.00);
	addObject(wind_wood_1.at(16), -4.00, 2.00, -3.00);
	addObject(wind_wood_1.at(17), -4.00, 2.00, -5.00);
	addObject(wind_wood_1.at(18), -1.00, 2.00, -5.00);
	addObject(wind_wood_1.at(19), -1.00, 2.00, -3.00);
	addObject(wind_wood_1.at(20), -4.00, 1.00, -3.00);
	addObject(wind_wood_1.at(21), -4.00, 1.00, -5.00);
	addObject(wind_wood_1.at(22), -1.00, 1.00, -5.00);
	addObject(wind_wood_1.at(23), -1.00, 1.00, -3.00);

	// wind_wood_2
	addObject(wind_wood_2.at(0), -1.00, 8.00, -4.00, 1.00, 0.2, 0.2);
	addObject(wind_wood_2.at(1), -2.00, 8.00, -4.00);
	addObject(wind_wood_2.at(2), -3.00, 8.00, -4.00);
	addObject(wind_wood_2.at(3), -3.00, 6.00, -4.00);
	addObject(wind_wood_2.at(4), -2.00, 7.00, -4.00);
	addObject(wind_wood_2.at(5), -2.00, 6.00, -4.00);
	addObject(wind_wood_2.at(6), -3.00, 7.00, -4.00);
	addObject(wind_wood_2.at(7), -2.00, 4.00, -4.00);
	addObject(wind_wood_2.at(8), -2.00, 5.00, -4.00);
	addObject(wind_wood_2.at(9), -3.00, 5.00, -4.00);
	addObject(wind_wood_2.at(10), -3.00, 4.00, -4.00);
	addObject(wind_wood_2.at(11), -4.00, 2.00, -4.00);
	addObject(wind_wood_2.at(12), -4.00, 1.00, -4.00);
	addObject(wind_wood_2.at(13), -2.00, 2.00, -3.00);
	addObject(wind_wood_2.at(14), -3.00, 2.00, -3.00);
	addObject(wind_wood_2.at(15), -3.00, 1.00, -3.00);
	addObject(wind_wood_2.at(16), -2.00, 1.00, -3.00);
	addObject(wind_wood_2.at(17), -2.00, 2.00, -5.00);
	addObject(wind_wood_2.at(18), -3.00, 2.00, -5.00);
	addObject(wind_wood_2.at(19), -3.00, 1.00, -5.00);
	addObject(wind_wood_2.at(20), -2.00, 1.00, -5.00);
	
	// house_glass
	addObject(house_glass.at(0), -3.00, 2.00, 0.00);
	addObject(house_glass.at(1), -3.00, 2.00, 4.00);

	// house_roof_half
	addObject(house_roof_half.at(0), -5.00, 5.24, 1.25);
	addObject(house_roof_half.at(1), -1.00, 4.24, 0.25);
	addObject(house_roof_half.at(2), 0.00, 4.75, 3.00, 1.00, 0.50, 1.00);
	addObject(house_roof_half.at(3), -5.00, 4.75, 1.00, 1.00, 0.50, 1.00);
	addObject(house_roof_half.at(4), 0.00, 4.75, 1.00, 1.00, 0.50, 1.00);
	addObject(house_roof_half.at(5), -4.00, 3.75, 4.00, 1.00, 0.50, 1.00); // rotate
	addObject(house_roof_half.at(6), 0.00, 3.75, 4.00, 1.00, 0.50, 1.00); // rotate
	addObject(house_roof_half.at(7), -2.00, 5.24, 2.75); // rotate
	addObject(house_roof_half.at(8), -1.00, 5.24, 1.25);

	// house_wood_1
	addObject(house_wood_1.at(0), -1.00, 3.00, 4.00);

	// house_wood_2
	addObject(house_wood_2.at(0), -1.00, 3.00, 3.00);
	addObject(house_wood_2.at(1), 0.00, 4.00, 1.00);
	addObject(house_wood_2.at(2), -4.00, 3.00, 1.00);
	addObject(house_wood_2.at(3), -3.00, 3.00, 4.00);
	addObject(house_wood_2.at(4), -2.00, 3.00, 4.00);
	addObject(house_wood_2.at(5), -4.00, 3.00, 2.00);
	
	// house_fence
	addObject(house_fence.at(0), 1.49, 1.36, 3.00); // rotate
	addObject(house_fence.at(1), 1.49, 1.00, 1.00); // rotate
	addObject(house_fence.at(2), 2.49, 1.00, 1.00); // rotate
	addObject(house_fence.at(3), 1.00, 1.00, 3.00);
	addObject(house_fence.at(4), 0.00, 1.00, 1.00);

	// sun
	addObject(sun.at(0), 0.00, 3.00, 0.00); // rotate
}

void Scene2::update() {}