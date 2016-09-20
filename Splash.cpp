#include "Splash.h"
#include <cstdio>

void Splash::init(int a_font)
{
	font = a_font;
}

void Splash::play()
{
	timer = 3;
}

void Splash::draw()
{
	char buffer[64];
	sprintf_s(buffer, "Welcome to pong #_#");
	sfw::drawString(font, buffer, 100, 200, 28, 28);
	sfw::drawLine(5, 20, 5 + 880 * (timer / 3.f), 20);
}

void Splash::step()
{
	timer -= sfw::getDeltaTime();
}

APP_STATE Splash::next()
{
	if (timer < 0) {
		return ENTER_MENU;
	}
		return SPLASH;
}
