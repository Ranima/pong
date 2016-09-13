#include "Ball.h"

#include "sfwdraw.h"

void Ball::init(float x, float y, float Radius, int Steps, float SpeedX, float SpeedY)
{
	positionX = x;
	positionY = y;
	radius = Radius;
	steps = Steps;
	speedX = SpeedX;
	speedY = SpeedY;
}

void Ball::update(Paddle & player1, Paddle & player2)
{
	positionX += speedX;
	positionY += speedY;
	if (positionX > 900) {
		speedX *= -1;
		positionX = 450;
		positionY = 250;
	}

	if (positionY > 500) {
		speedY *= -1;
		positionY = 500;
	}

	if (positionX < 0) {
		speedX *= -1;
		positionX = 450;
		positionY = 250;
	}

	if (positionY < 0) {
		speedY *= -1;
		positionY = 0;
	}

	if (positionX <= player1.PositionX && positionY >= player1.PositionY && positionY <= player1.PositionY + 100) {
		speedX *= -1;
		positionX = player1.PositionX + 1;
	}

	if (positionX >= player2.PositionX && positionY >= player2.PositionY && positionY <= player2.PositionY + 100) {
		speedX *= -1;
		positionX = player2.PositionX - 1;
	}
}

void Ball::draw()
{
	sfw::drawCircle(positionX, positionY, radius, steps, WHITE);
}
