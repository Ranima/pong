#include "MENU.h"

void Menu::init(int a_font) 
{
	font = a_font;
}

void Menu::play()
{
	bool Wbutton = false;
	bool Qbutton = false;
	bool Hbutton = false;
}

void Menu::draw()
{
	char buffer[64];
	sprintf_s(buffer, "Press W to play\n\nPress Q to exit\n\nPress H to learn how to play");
	sfw::drawString(font, buffer, 100, 300, 20, 20);
}

void Menu::choose()
{
	if (sfw::getKey('W'))
	{
		Wbutton = true;
	}

	if (sfw::getKey('Q'))
	{
		Qbutton = true;
	}

	if (sfw::getKey('H'))
	{
		Hbutton = true;
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
		Wbutton = false;
		return ENTER_GAMESTATE;
	}
	if (Qbutton == true)
	{
		Qbutton = false;
		return ENTER_GAMEEND;
	}
	if (Hbutton == true)
	{
		Hbutton = false;
		return ENTER_HOWTOPLAY;
	}
	return MENU;
}