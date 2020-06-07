#include "MarsRover.h"

MarsRover::MarsRover(Player player, int x, int y)
	: player{ player }, x{ x }, y{ y } {
}

MarsRover::~MarsRover() {

}

bool MarsRover::check_win(const Map& map, int x, int y) {
	if (map.tiles[x][y].win) {
		return true;
	}
	else {
		return false;
	}
}

void MarsRover::action(std::string action, Map &map) {
	if (action == "up") {
		move_up(map);
	}
	else if (action == "down") {
		move_down(map);
	}
	else if (action == "left") {
		move_left(map);
	}
	else if (action == "right") {
		move_right(map);
	}
	check_win(map, x, y);
}

bool MarsRover::check_action(const Map& map, int x, int y) {
	//Check map limits
	if (y < 0 || y > map.y) {
		std::cout << "Cannot move in that direction" << std::endl;
	}
	//Check tile is not rock/blocking
	else if (map.tiles[x][y].blocks) {
		std::cout << "Cannot move to tile, it is blocking your path!" << std::endl;
	}
	else {
		return true;
	}

	return false;
}

void MarsRover::move_up(Map &map) {
	int next_x = x -1;
	if (check_action(map, next_x, y)) {
		map.tiles[x][y].player = false;
		map.tiles[x][y].player = true;
		x = next_x;
		std::cout << "Moved up!" << std::endl;
	}
}

void MarsRover::move_down(Map& map) {
	int next_x = x + 1;
	if (check_action(map, next_x, y)) {
		map.tiles[x][y].player = false;
		map.tiles[x][y].player = true;
		x = next_x;
		std::cout << "Moved up!" << std::endl;
	}
}

void MarsRover::move_left(Map& map) {
	int next_y = y + 1;
	if (check_action(map, x, next_y)) {
		map.tiles[x][y].player = false;
		map.tiles[x][y].player = true;
		y = next_y;
		std::cout << "Moved up!" << std::endl;
	}
}

void MarsRover::move_right(Map& map) {
	int next_y = y - 1;
	if (check_action(map, x, next_y)) {
		map.tiles[x][y].player = false;
		map.tiles[x][y].player = true;
		y = next_y;
		std::cout << "Moved up!" << std::endl;
	}
}