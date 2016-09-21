#pragma once

class Paddle
{
private:
	char upButton, downButton, switch1, switch2, switch3;

public:
	float PositionX, PositionY;

	float Size;
	float Speed;
	int kind;

	void init(float x, float y, float size, float speed, char up, char down, char s1, char s2, char s3, int typ);
	void update();
	void draw();
};