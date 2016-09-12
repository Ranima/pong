#pragma once
#include "pongapp.h"
class paddle {
	Paddle createPaddle(float x, float y, float size, float speed);
	void updatePaddle(Paddle &paddle);
	void updatePaddle2(Paddle &paddle);
	void drawPaddle(Paddle paddle);
};