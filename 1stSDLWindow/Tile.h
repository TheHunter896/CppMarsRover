#pragma once
class Tile
{
public:
	int x;
	int y;
	char value{ ' ' };
	bool player = false;
	bool blocks = false;
	bool win = false;

	Tile(int x, int y, char value, bool blocks);
	~Tile();
};

