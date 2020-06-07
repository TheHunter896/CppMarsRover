#pragma once
#include <iostream>
#include "Map.h"
#include "Player.h"

class MarsRover
{
private:
	void move_up(Map& map);
	void move_down(Map& map);
	void move_left(Map& map);
	void move_right(Map& map);
	bool check_action(Map& map, int x, int y);

public:
	int x;
	int y;
	Player player;

	MarsRover(Player player, int x, int y);
	~MarsRover();

	void action(std::string action, Map &map);
};

