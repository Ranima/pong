#pragma once

#include "sfwdraw.h"

struct Paddle
{
	float PositionX, PositionY;
	float Size;
	float Speed;
};

//createPaddle
Paddle createPaddle(float x, float y, float size, float speed);

//updatePaddle
void updatePaddle(Paddle &paddle);
void updatePaddle2(Paddle &paddle);

//drawPaddle
void drawPaddle(Paddle paddle);
//_____________________________________________________________________________________________________________
struct Ball
{
	float positionX, positionY;
	float radius;
	int steps;
	float speedX;
	float speedY;
};

Ball spawnBall(float x, float y, float radius, int steps, float speedX, float speedY);

//#1 I need the ball to move...
//#2 I need the ball to switch directions on the edges...
//#3 I need the ball to switch directions on the paddle...
void updateBall(Ball &ball, Paddle &player1, Paddle &player2);

void drawBall(Ball &ball);
//____________________________________________________________________________________________
void buildCourt();

void drawCourt();
//_______________________________________________________________________________________________
//I want to keep score for both players