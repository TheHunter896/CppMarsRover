#include "Entrance.h"
#include <iostream>

Entrance::Entrance(int x, int y)
	:Tile{ x, y, 'e' }{
	std::cout << "Initialized entrance at " << x << ' ' << y << std::endl;
}

Entrance::~Entrance(){
}