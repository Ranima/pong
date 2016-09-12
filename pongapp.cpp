#include "pongapp.h"

Paddle createPaddle(float x, float y, float size, float speed)
{
	Paddle retval;

	retval.PositionX = x;
	retval.PositionY = y;
	retval.Size = size;
	retval.Speed = speed;

	return retval;
}

void updatePaddle(Paddle &paddle) {
	if (sfw::getKey('W')) {
		paddle.PositionY += paddle.Speed;
		if (paddle.PositionY + 100 >= 500) {
			paddle.PositionY -= paddle.Speed;
		}
	}

	if (sfw::getKey('S')) {
		paddle.PositionY -= paddle.Speed;
		if (paddle.PositionY <= 0) {
			paddle.PositionY += paddle.Speed;
		}
	}
}

void updatePaddle2(Paddle &paddle) {
	if (sfw::getKey(KEY_UP)) {
		paddle.PositionY += paddle.Speed;
		if (paddle.PositionY + 100 >= 500) {
			paddle.PositionY -= paddle.Speed;
		}
	}

	if (sfw::getKey(KEY_DOWN)) {
		paddle.PositionY -= paddle.Speed;
		if (paddle.PositionY <= 0) {
			paddle.PositionY += paddle.Speed;
		}
	}
}

void drawPaddle(Paddle paddle) {
	sfw::drawLine(paddle.PositionX, paddle.PositionY, paddle.PositionX, paddle.PositionY + paddle.Size);
}

Ball spawnBall(float x, float y, float radius, int steps, float speedX, float speedY)
{
	Ball placeholder;

	placeholder.positionX = x;
	placeholder.positionY = y;
	placeholder.radius = radius;
	placeholder.steps = steps;
	placeholder.speedX = speedX;
	placeholder.speedY = speedY;

	return placeholder;
}

void updateBall(Ball &ball, Paddle &player1, Paddle &player2)
{
	ball.positionX += ball.speedX;
	ball.positionY += ball.speedY;
	if (ball.positionX > 900) {
		ball.speedX *= -1;
		ball.positionX = 450;
		ball.positionY = 250;
	}

	if (ball.positionY > 500) {
		ball.speedY *= -1;
		ball.positionY = 500;
	}

	if (ball.positionX < 0) {
		ball.speedX *= -1;
		ball.positionX = 450;
		ball.positionY = 250;
	}

	if (ball.positionY < 0) {
		ball.speedY *= -1;
		ball.positionY = 0;
	}

	if (ball.positionX <= player1.PositionX && ball.positionY >= player1.PositionY && ball.positionY <= player1.PositionY + 100) {
		ball.speedX *= -1;
		ball.positionX = player1.PositionX + 1;
	}

	if (ball.positionX >= player2.PositionX && ball.positionY >= player2.PositionY && ball.positionY <= player2.PositionY + 100) {
		ball.speedX *= -1;
		ball.positionX = player2.PositionX - 1;
	}
}

void drawBall(Ball &ball) {
	sfw::drawCircle(ball.positionX, ball.positionY, ball.radius, ball.steps, WHITE);
}

void buildCourt() {
	sfw::initContext(900, 500);
}

void drawCourt() {
	sfw::setBackgroundColor(BLACK);
	sfw::drawLine(450, 2, 450, 498, RED);
	sfw::drawLine(898, 498, 2, 498, GREEN);
	sfw::drawLine(898, 2, 2, 2, GREEN);
	sfw::drawLine(2, 2, 2, 498, BLUE);
	sfw::drawLine(898, 2, 898, 498, MAGENTA);
}