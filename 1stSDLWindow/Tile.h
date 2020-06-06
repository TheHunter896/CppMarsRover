#pragma once
class Tile
{
public:
	int x;
	int y;
	char value{ ' ' };

	Tile(int x, int y, char value);
	~Tile();
};

