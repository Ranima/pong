#pragma once


class scoreboard {
	int font;
	int p1score;
	int p2score;

	Ball ball;
public:
	void init(int a_font, Ball ball);
	void update();
	void draw();
};