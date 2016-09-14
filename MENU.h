#pragma once
#include "constdecl.h"

class MENU {
	int font;
	float timer;
	int select;

public:

	void init(int a_font);

	void play();
	void draw();
	void choose();

	APP_STATE next();
};