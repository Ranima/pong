#include "sfwdraw.h"
#include "pongapp.h"
#include "GameState.h"

// 1. GameState
// 2. Classify our objects (even further!) :)

void main() {
	buildCourt();

	GameState game;
	game.init();

	while ( sfw::stepContext() )
	{
		game.update();
		game.draw();
	}

	sfw::termContext();
}