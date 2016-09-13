#pragma once

class Paddle
{
public:
	float PositionX, PositionY;
	float Size;
	float Speed;
	char upButton, downButton;

	void init(float x, float y, float size, float speed, char up, char down);
	void update();
	void draw();
};