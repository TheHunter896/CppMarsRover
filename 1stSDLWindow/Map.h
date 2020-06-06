#pragma once
#include <iostream>
#include <vector>
#include "Rock.h"
#include "Tile.h"

class Map
{
private:
	std::vector<int> entrance {};
	std::vector<int> exit {};
	std::string status = "Not ready";

public:
	int x { 0 };
	int y { 0 };
	std::vector<std::vector<Tile>> tiles;


	Map();
	Map(int tiles_x, int tiles_y, bool complex);
	~Map();

	void Display();

};

