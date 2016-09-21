#include "GameState.h"

#include "pongapp.h"

void GameState::init(int a_font)
{
	font = a_font;
	ball.init(450, 250, 20, 12, 5, 5);
	player1.init(40, 250, 100, 10, 'W', 'S', 'A', 'D', 'Q', 0);
	player2.init(860, 250, 100, 10, 'I', 'K', 'L', 'J', 'O', 0);
	//score.init(font, ball);
}

void GameState::update()
{
	if (sfw::getKey('E'))
	{
		Ebutton = true;
	}
	player1.update();
	player2.update();
	ball.update(player1,player2);
	//score.update();
}

void GameState::draw()
{
	char buffer[64];
	sprintf_s(buffer, "Press E to return to menu");
	sfw::drawString(font, buffer, 20, 20, 14, 14);
	drawCourt();
	player1.draw();
	player2.draw();
	ball.draw();
	//score.draw();
}

APP_STATE GameState::next()
{
	if (Ebutton == true)
	{
		Ebutton = false;
		return ENTER_MENU;
	}
	return APP_STATE::GAMESTATE;
}
