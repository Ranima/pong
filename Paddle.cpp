#include "Paddle.h"



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

//drawPaddle
void drawPaddle(Paddle paddle) {
	sfw::drawLine(paddle.PositionX, paddle.PositionY, paddle.PositionX, paddle.PositionY + paddle.Size);
}