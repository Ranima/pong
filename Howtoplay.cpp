#include "Howtoplay.h"

void Howtoplay::init(int a_font)
{
	font = a_font;
}

void Howtoplay::play()
{
	bool Ebutton = false;
}

void Howtoplay::draw()
{
	char buffer[] = 
		"Player1\n"
		"  Movement    - W (up)     S (down)\n"
		"  Ball Speed  - A (faster) D (slower)\n"
		"  Switch direction - Q\n\n"
		"Player2\n"
		"  Movement    - I (up)     K (down)\n"
		"  Ball Speed  - L (faster) J (slower)\n"
		"  Switch Direction - O\n\n"
		"Press E to go back to the menu"
	;
	sfw::drawString(font, buffer, 20, 420, 20, 20);
}

void Howtoplay::choose()
{
	if (sfw::getKey('E'))
	{
		Ebutton = true;
	}
	/*
	scanf_s("%s", &W);
	if (W == 'W')
	{
	Wbutton = true;
	}
	*/
}

APP_STATE Howtoplay::next()
{
	if (Ebutton == true)
	{
		Ebutton = false;
		return ENTER_MENU;
	}
	return HOWTOPLAY;
}