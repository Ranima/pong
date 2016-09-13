#pragma once

class Paddle
{
private:
	char upButton, downButton, switch1, switch2;

public:
	float PositionX, PositionY;

	float Size;
	float Speed;
	int kind;

	void init(float x, float y, float size, float speed, char up, char down, char s1, char s2, int typ);
	void update();
	void draw();
};