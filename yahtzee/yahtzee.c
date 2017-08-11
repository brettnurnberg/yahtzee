#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "yahtzee.h"

int score_roll(int* in_dice, int category, int usedYahtzee)
{
	int points = 0;
	int i, count = -1;
	int temp;
	int dice[5];
	int num_ones = 0;
	int num_twos = 0;
	int num_threes = 0;
	int num_fours = 0;
	int num_fives = 0;
	int num_sixes = 0;

	for (i = 0; i < 5; i++)
	{
		dice[i] = in_dice[i];
		switch (dice[i])
		{
		case 1:
			num_ones++;
			break;
		case 2:
			num_twos++;
			break;
		case 3:
			num_threes++;
			break;
		case 4:
			num_fours++;
			break;
		case 5:
			num_fives++;
			break;
		case 6:
			num_sixes++;
			break;
		}
	}

	//order dice
	while (count != 0)
	{
		count = 0;
		for (i = 0; i < 4; i++)
		{
			if (*(dice + i) > *(dice + i + 1))
			{
				temp = *(dice + i);
				*(dice + i) = *(dice + i + 1);
				*(dice + i + 1) = temp;
				count++;
			}
		}
	}

	if ((category >= ACES) && (category <= SIXES))
	{
		count = 0;
		for (i = 0; i < 5; i++)
		{
			if (*(dice + i) == (category + 1))
			{
				count++;
			}
		}
		points = count * (category + 1);
	}
	if (category == THREE_OF_A_KIND)
	{
		if (((*(dice) == *(dice + 1)) && (*(dice + 1) == *(dice + 2))) || ((*(dice + 1) == *(dice + 2)) && (*(dice + 2) == *(dice + 3))) || ((*(dice + 2) == *(dice + 3)) && (*(dice + 3) == *(dice + 4))))
		{
			for (i = 0; i < 5; i++)
			{
				points += *(dice + i);
			}
		}
	}
	if (category == FOUR_OF_A_KIND)
	{
		if (((*(dice) == *(dice + 1)) && (*(dice + 1) == *(dice + 2)) && (*(dice + 2) == *(dice + 3))) || ((*(dice + 1) == *(dice + 2)) && (*(dice + 2) == *(dice + 3)) && (*(dice + 3) == *(dice + 4))))
		{
			for (i = 0; i < 5; i++)
			{
				points += *(dice + i);
			}
		}
	}
	if (category == FULL_HOUSE)
	{
		if (((*(dice) == *(dice + 1)) && (*(dice + 1) == *(dice + 2)) && (*(dice + 3) == *(dice + 4))) || ((*(dice) == *(dice + 1)) && (*(dice + 2) == *(dice + 3)) && (*(dice + 3) == *(dice + 4))))
		{
			points = 25;
		}
	}
	if (category == SMALL_STRAIGHT)
	{
		if ( num_threes && num_fours && ( (num_twos && num_fives ) || (num_ones && num_twos) || (num_fives && num_sixes) ) )
		{
			points = 30;
		}
	}
	if (category == LARGE_STRAIGHT)
	{
		if ((*(dice + 4) == (*(dice + 3) + 1)) && (*(dice + 3) == (*(dice + 2) + 1)) && (*(dice + 2) == (*(dice + 1) + 1)) && (*(dice + 1) == (*(dice)+1)))
		{
			points = 40;
		}
	}
	if (category == YAHTZEE)
	{
		if ((*(dice) == *(dice + 1)) && (*(dice + 1) == *(dice + 2)) && (*(dice + 2) == *(dice + 3)) && (*(dice + 3) == *(dice + 4)))
		{
			if (!usedYahtzee)
			{
				points = 50;
			}
			else
			{
				points = 50 + usedYahtzee * 100;
			}
		}
	}
	if (category == CHANCE)
	{
		for (i = 0; i < 5; i++)
		{
			points += *(dice + i);
		}
	}

	return points;
}

int roll_die(void)
{
	return (rand() % 6 + 1);
}