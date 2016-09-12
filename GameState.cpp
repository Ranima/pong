#include "GameState.h"

void GameState::init()
{
	ball = spawnBall(450, 250, 20, 13, 5, 5);
	player1 = createPaddle(40, 250, 100, 5);
	player2 = createPaddle(860, 250, 100, 5);
}

void GameState::update()
{
	updatePaddle(player1);
	updatePaddle2(player2);
	updateBall(ball,player1,player2);
}

void GameState::draw()
{
	drawCourt();
	drawPaddle(player1);
	drawPaddle(player2);
	drawBall(ball);
}