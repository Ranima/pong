#pragma once

#include "Paddle.h"

class Ball
{
	bool Qkey;
	bool Okey;

public:
	float positionX, positionY;
	float radius;
	int steps;
	float speedX;
	float speedY;

	void init(float x, float y, float radius, int steps, float speedX, float speedY);
	void update(Paddle &player1, Paddle &player2);
	void draw();
};