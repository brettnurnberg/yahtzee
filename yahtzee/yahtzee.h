#pragma once

enum
{
	ACES,
	TWOS,
	THREES,
	FOURS,
	FIVES,
	SIXES,
	THREE_OF_A_KIND,
	FOUR_OF_A_KIND,
	FULL_HOUSE,
	SMALL_STRAIGHT,
	LARGE_STRAIGHT,
	YAHTZEE,
	CHANCE

};

int roll_die(void);

int score_roll(int* in_dice, int category, int usedYahtzee);