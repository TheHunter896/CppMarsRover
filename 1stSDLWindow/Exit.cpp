#include "Exit.h"
#include <iostream>

Exit::Exit(int x, int y)
	:Tile{ x, y, 'e' } {
	std::cout << "Intialized exit at " << x << ' ' << y << std::endl;
}

Exit::~Exit(){

}