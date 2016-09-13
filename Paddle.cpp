#include "Paddle.h"

#include "sfwdraw.h"

void Paddle::init(float x, float y, float size, float speed, char up, char down, char s1, char s2, int typ)
{
	PositionX = x;
	PositionY = y;
	Size = size;
	Speed = speed;
	upButton = up;
	downButton = down;
	switch1 = s1;
	switch2 = s2;
	kind = typ;
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

	// switch1 is J
	// switch2 is L

	// kind = 0
	// I am holding L

	if (sfw::getKey(switch1))
	{
		kind = 1;
	}
	else if (sfw::getKey(switch2))
	{
		kind = 2;
	}
	else
	{
		kind = 0;
	}
}

void Paddle::draw()
{
	sfw::drawLine(PositionX, PositionY, PositionX, PositionY + Size);
}