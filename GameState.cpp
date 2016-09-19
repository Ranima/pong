#include "GameState.h"

#include "pongapp.h"

void GameState::init()
{
	ball.init(450, 250, 20, 13, 5, 5);
	player1.init(40, 250, 100, 5, 'W', 'S', 'A', 'D', 0);
	player2.init(860, 250, 100, 5, 'I', 'K', 'L', 'J', 0);
}

void GameState::update()
{
	player1.update();
	player2.update();
	ball.update(player1,player2);
}

void GameState::draw()
{
	drawCourt();
	player1.draw();
	player2.draw();
	ball.draw();
}

APP_STATE GameState::next()
{
	return APP_STATE::GAMESTART;
}
