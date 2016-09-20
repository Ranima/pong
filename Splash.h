#pragma once

#include "constdecl.h"

class Splash
{
	int font;
	

public:
	float timer;

	void init(int a_font);

	void play();
	void draw();
	void step();

	APP_STATE next();
};