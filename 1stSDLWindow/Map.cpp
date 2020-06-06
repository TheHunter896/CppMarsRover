#include "Map.h"
#include <iostream>
#include <math.h>
#include <random>
#include <vector>
#include "Rock.h"
#include "Tile.h"
#include "Entrance.h"
#include "Exit.h"

Map::Map()
	: x{ 0 }, y{ 0 }{
		//Initialize tiles
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y;  i++) {
				Tile tile{ i, j, 't'};
				tiles[i][j] = tile;
			}
		}
		std::cout << "Initialized an empty map" << std::endl;
		//Initialize entrace/exit
		entrance.push_back(0);
		entrance.push_back(0);
		exit.push_back(0);
		exit.push_back(0);
		status = "Empty";
}

Map::Map(int x, int y, bool complex) 
	: x{ x }, y{ y } {
	bool random = false;
	int area = x * y;

	for (int i = 0; i < x; i++) {
		std::vector<Tile> *temp_tiles{ nullptr };
		for (int j = 0; j < y; i++) {
			Tile tile{ i, j, 't'};
			temp_tiles->push_back(tile);
		}
		tiles[i] = *temp_tiles;
		delete temp_tiles;
	}

	if (complex) {
		//If complex add rocks
		int carea = static_cast<int>(std::ceil((x * static_cast<float>(y))/2));
		int nrocks = rand() % carea;

		for (int i = 0; i < nrocks; i++) {
			int random_x = rand() % carea;
			int random_y = rand() % carea;
			Rock rock{ random_x, random_y };
			tiles[random_x][random_y] = rock;
		}
		std::cout << "Initialized " << nrocks << " rocks." << std::endl;
	}

	int entrance_x = rand() % area;
	int entrance_y = rand() % area;
	Entrance entrance{ entrance_x, entrance_y };

	tiles[entrance_x][entrance_y] = entrance;

	int exit_x = rand() % area;
	int exit_y = rand() % area;
	Exit exit { exit_x, exit_y };

	tiles[exit_x][exit_y] = exit;

	std::cout << "Initialized a map of " << x << ' ' << y;

}

Map::~Map() {
	std::cout << "Destructing map" << std::endl;
}