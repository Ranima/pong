#include "sfwdraw.h"
#include "GameState.h"
#include "constdecl.h"
#include "Splash.h"


// 1. GameState
// 2. Classify our objects (even further!) :)


void main() {
	sfw::initContext(900, 500);
	unsigned font = sfw::loadTextureMap("./res/fontmap.png", 16, 16);

	GameState game;
	Splash splash;

	

	APP_STATE state = ENTER_SPLASH;

	while (sfw::stepContext()) 
	{
		switch (state)
		{
			//starts the opening
		case ENTER_SPLASH:
			splash.init(font);
			//opening
		case SPLASH:
			splash.play();
			splash.step();
			splash.draw();
			splash.next();
			break;
			//starts the menu
		case ENTER_MENU:

			//is the menu
		case MENU:

			break;
			//starts the game
		case ENTER_GAMESTART:
			game.init();

			//is the game
		case GAMESTART:
			game.update();
			game.draw();
			state = game.next();
			break;
			//starts stoping the game
		case ENTER_GAMEEND:
			 
			//ends the game
		case GAMEEND:

			break;
		}
	}
	sfw::termContext();
}

//buildCourt();
//
//GameState game;
//game.init();
//
//while (sfw::stepContext())
//{
//	game.update();
//	game.draw();
//}
//
//sfw::termContext();