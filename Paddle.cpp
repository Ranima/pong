#include "Paddle.h"

#include "sfwdraw.h"

void Paddle::init(float x, float y, float size, float speed, char up, char down)
{
	PositionX = x;
	PositionY = y;
	Size = size;
	Speed = speed;
	upButton = up;
	downButton = down;
}

void Paddle::update()
{
	if (sfw::getKey(upButton)) {
		PositionY += Speed;
		if (PositionY + 100 >= 500) {
			PositionY -= Speed;
		}
	}

	if (sfw::getKey(downButton)) {
		PositionY -= Speed;
		if (PositionY <= 0) {
			PositionY += Speed;
		}
	}
}

void Paddle::draw()
{
	sfw::drawLine(PositionX, PositionY, PositionX, PositionY + Size);
}