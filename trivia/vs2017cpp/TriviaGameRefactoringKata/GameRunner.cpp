#include "pch.h"
#include <stdlib.h>
#include "Game.h"

static bool notAWinner;

int run(std::ostream& out)
{

	Game aGame(out);

	aGame.add("Chet");
	aGame.add("Pat");
	aGame.add("Sue");

	do
	{

		aGame.roll(rand() % 5 + 1);

		if (rand() % 9 == 7)
		{
			notAWinner = aGame.wrongAnswer();
		}
		else
		{
			notAWinner = aGame.wasCorrectlyAnswered();
		}
	} while (notAWinner);

	return 0;

}

int main()
{

	run(std::cout);

}