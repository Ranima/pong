#include <iostream>
#include "sfwdraw.h"
#include "GameState.h"
#include "constdecl.h"
#include "Splash.h"
#include "MENU.h"
#include "Howtoplay.h"
#include "scoreboard.h"

// 1. GameState
// 2. Classify our objects (even further!) :)


void main() {
	sfw::initContext(900, 500);
	unsigned font = sfw::loadTextureMap("./res/fontmap.png", 16, 16);

	GameState game;
	Splash splash;
	Menu menu;
	Howtoplay HTP;
	bool playing = true;

	splash.init(font); // setup our values
	menu.init(font);
	HTP.init(font);

	APP_STATE state = ENTER_SPLASH;

	while (sfw::stepContext() && playing == true) 
	{
		switch (state)
		{
			//starts the opening
		case ENTER_SPLASH:
			splash.play();
			//opening
		case SPLASH:
			splash.draw();
			splash.step();
			state = splash.next();
			break;
			//starts the menu
		case ENTER_MENU:
			menu.play(); //reset values
			//is the menu
		case MENU:		
			menu.draw();
			menu.choose();
			state = menu.next();
			break;
			//says how to play
		case ENTER_HOWTOPLAY:
			HTP.play();
		case HOWTOPLAY:
			HTP.draw();
			HTP.choose();
			state = HTP.next();
			break;
			//starts the game
		case ENTER_GAMESTATE:
			game.init(font);
			//is the game
		case GAMESTATE:
			game.update();
			game.draw();
			state = game.next();
			break;
			//starts stoping the game
		case ENTER_GAMEEND:
			 
			//ends the game
		case GAMEEND:
			playing = false;
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