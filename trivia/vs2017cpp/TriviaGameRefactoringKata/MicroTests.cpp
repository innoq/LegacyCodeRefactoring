#include "pch.h"
#include <gtest/gtest.h>

#include "Game.h"


using namespace std;

TEST(MicroTests, Categories)
{
	Game aGame;
	aGame.add("");

	EXPECT_EQ("Pop", aGame.currentCategory());
	aGame.roll(1);
	EXPECT_EQ("Science", aGame.currentCategory());
	aGame.roll(1);
	EXPECT_EQ("Sports", aGame.currentCategory());
	aGame.roll(1);
	EXPECT_EQ("Rock", aGame.currentCategory());

}