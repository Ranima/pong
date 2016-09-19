#include "Splash.h"
#include "sfwdraw.h"
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
	sprintf_s(buffer, "Welcome to pong :)");
	sfw::drawString(font, buffer, 20, 20, 14, 14);
	sfw::drawLine(5, 5, 5 + 880 * (timer / 3.f), 5);
}

void Splash::step()
{
	timer -= sfw::getDeltaTime();
}

APP_STATE Splash::next()
{
	if (timer < 0) {
		return ENTER_GAMESTART;
	}

	return SPLASH;
}
