#include "scoreboard.h"

void scoreboard::init(int a_font, Ball baall)
{
	font = a_font;
	ball = baall;
	p1score = 0;
	p2score = 0;
}

void scoreboard::update()
{
	if (ball.positionX <= 0)
	{
		p1score += 1;
	}
	if (ball.positionX <= 0)
	{
		p1score += 1;
	}
}

void scoreboard::draw()
{

}