#include "pongapp.h"

#include "sfwdraw.h"

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