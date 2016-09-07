#include "sfwdraw.h"
#include "pongapp.h"

void main() {
	buildCourt();
	Paddle player1 = createPaddle(40, 250, 100, 5);
	Paddle player2 = createPaddle(860, 250, 100, 5);
	Ball ball = spawnBall(450, 250, 20, 13, 5, 5);

	while ( sfw::stepContext() )
	{
		drawCourt();
		drawPaddle(player1);
		drawPaddle(player2);
		drawBall(ball);

		updatePaddle(player1);
		updatePaddle2(player2);
		updateBall(ball,player1,player2);

	}
}