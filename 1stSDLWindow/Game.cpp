#include "Game.h"
#include <iostream>

Game::Game() 
	: started{false} {
		std::cout << "Initializing game" << std::endl;
	}

void Game::start() {
	started = true;
	std::cout << "Starting Mars Rover" << std::endl;
}