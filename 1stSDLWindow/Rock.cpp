#include "Rock.h"
#include <iostream>

Rock::Rock(int x, int y)
	: Tile{ x, y, 'r', true}{
	std::cout << "Initialized rock in " << x << ' ' << y << std::endl;
}

Rock::~Rock() {
}