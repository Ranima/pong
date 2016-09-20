#include "MENU.h"

void Menu::init(int a_font) 
{
	font = a_font;
}

void Menu::play()
{
	bool Wbutton = false;
	bool Qbutton = false;
}

void Menu::draw()
{
	char buffer[64];
	sprintf_s(buffer, "Press W to play");
	sfw::drawString(font, buffer, 100, 200, 28, 28);
}

void Menu::choose()
{
	if (sfw::getKey('W'))
	{
		Wbutton = true;
	}
	/*
	scanf_s("%s", &W);
	if (W == 'W')
	{
		Wbutton = true;
	}
	*/
}

APP_STATE Menu::next()
{
	if(Wbutton == true)
	{
		return ENTER_GAMESTART;
	}
	return MENU;
}