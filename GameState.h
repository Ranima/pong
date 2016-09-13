#pragma once

#include "Paddle.h"
#include "Ball.h"

class GameState
{
	// Ball
	Ball ball;

	// Paddle
	Paddle player1;
	Paddle player2;

public:
	void init();
	void update();
	void draw();
};