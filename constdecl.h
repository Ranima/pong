#pragma once
#include <iostream>
#include "sfwdraw.h"

enum APP_STATE
{
	ENTER_SPLASH, SPLASH,		// Intro Screen
	ENTER_MENU, MENU,			// Main Menu
	ENTER_GAMESTATE, GAMESTATE,	// Start Game
	ENTER_GAMEEND, GAMEEND,		// End Game
	ENTER_HOWTOPLAY, HOWTOPLAY	// Says how to play
};