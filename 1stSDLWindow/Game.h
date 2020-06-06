#pragma once
#include <iostream>

class Game
{

protected:
	bool started = false;

public:
	Game();
	~Game();

	void start();
	void starting_menu();
};

