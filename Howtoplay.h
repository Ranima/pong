#pragma once
#include "constdecl.h"

class Howtoplay {
	int font;
	int select;
	bool Ebutton;

public:

	void init(int a_font);

	void play();
	void draw();
	void choose();

	APP_STATE next();
};