#pragma once

#include "Paddle.h"
#include "Ball.h"
#include "Score.h"
#include "constdecl.h"
#include "scoreboard.h"

class GameState
{
	// Ball
	Ball ball;

	// Paddle
	Paddle player1;
	Paddle player2;

	// Scoreboard
	//scoreboard score;

	int font;
	bool Ebutton;

public:
	void init(int a_font);
	void update();
	void draw();
	APP_STATE next();
};