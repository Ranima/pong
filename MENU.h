#pragma once
#include "constdecl.h"


class Menu {
	int font;
	int select;
	bool Wbutton;
	bool Qbutton;
	bool Hbutton;

public:
	
	void init(int a_font);

	void play();
	void draw();
	void choose();

	APP_STATE next();
};