#pragma once
#include <iostream>
#include "sfwdraw.h"

enum APP_STATE
{
	ENTER_SPLASH, SPLASH,		// Intro Screen
	ENTER_MENU, MENU,			// Main Menu
	ENTER_GAMESTART, GAMESTART,	// Start Game
	ENTER_GAMEEND, GAMEEND		// End Game
};