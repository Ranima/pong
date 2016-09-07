#pragma once

struct Paddle
{
	float PositionX, PositionY;
	float Size;
	float Speed;
};

//createPaddle
Paddle createPaddle(float x, float y, float size, float speed)
{
	Paddle retval;

	retval.PositionX = x;
	retval.PositionY = y;
	retval.Size = size;
	retval.Speed = speed;

	return retval;
}

//updatePaddle
void updatePaddle(Paddle &paddle) {
	if (sfw::getKey('W')) {
		paddle.PositionY += paddle.Speed;
	}

	if (sfw::getKey('S')) {
		paddle.PositionY -= paddle.Speed;
	}
}

//drawPaddle
void drawPaddle(Paddle paddle) {
	sfw::drawLine(paddle.PositionX, paddle.PositionY, paddle.PositionX, paddle.PositionY + paddle.Size);
}
//________________________________________________________________________________________________________________
struct Ball
{
	float positionX, positionY;
	float radius;
	int steps;
	float speed;
};

Ball spawnBall(float x, float y, float radius, int steps, float speed)
{
	Ball placeholder;

	placeholder.positionX = x;
	placeholder.positionY = y;
	placeholder.radius = radius;
	placeholder.steps = steps;
	placeholder.speed = speed;

	return placeholder;
}

void updateBall(Ball &ball) 
{
	ball.positionY += 1;
	ball.positionX += 3;
	if (ball.positionX == 900) {
		ball.positionX -= 3;
	}
	if (ball.positionX == 0) {
		ball.positionX += 3;
	}
	if (ball.positionY == 500) {
		ball.positionY -= 1;
	}
	if (ball.positionY == 0) {
		ball.positionY += 1;
	}
}

void drawBall(Ball &ball) {
	sfw::drawCircle(ball.positionX, ball.positionY, ball.radius, ball.steps, WHITE);
}
//____________________________________________________________________________________________
void buildCourt() {
	sfw::initContext(900, 500);
	sfw::setBackgroundColor(BLACK);
	sfw::drawLine(898, 498, 2, 498, GREEN);
	sfw::drawLine(898, 2, 2, 2, GREEN);
	sfw::drawLine(2, 2, 2, 498, BLUE);
	sfw::drawLine(898, 2, 898, 498, MAGENTA);
}
