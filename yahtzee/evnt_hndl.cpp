#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <array>

#include "usr_intf.h"
#include "yahtzee.h"

/*
Add menu bar to start new game
add high scores
*/

using namespace yahtzee;

#define NUM_CTGS 13

typedef uint8_t boolean;

public class dice_class
{
public:
	int val[5];
	boolean is_sel[5];
	uint8_t roll_num;
	uint8_t animation_state;

};

public class score_class
{
public:
	boolean ctg_is_used[NUM_CTGS];
	uint16_t ctg_score[NUM_CTGS];
	uint16_t upper_score;
	uint16_t upper_total;
	uint8_t bonus_score;
	uint16_t lower_score;
	uint16_t total_score;
	boolean used_yahtzee;
	int8_t sel_ctg;
	boolean allow_sel_ctg;
	uint8_t num_used;

};

dice_class dice;
score_class score_card;

/* gui init code */
usr_intf::usr_intf(void)
{
	InitializeComponent();
	init_game();
}

void usr_intf::init_game(void)
{
	int i;

	time_t t;
	srand((int)time(&t));
	btn_scr->Enabled = false;
	btn_roll->Enabled = true;
	roll_nmb_lbl->Visible = false;

	dice.roll_num = 1;
	dice.animation_state = false;

	for (i = 0; i < 5; i++)
	{
		dice.is_sel[i] = 0;
	}

	score_card.sel_ctg = -1;
	score_card.allow_sel_ctg = false;
	score_card.used_yahtzee = false;

	for (i = 0; i < NUM_CTGS; i++)
	{
		score_card.ctg_is_used[i] = 0;
		score_card.ctg_score[i] = 0;
	}
	
	score_card.upper_score = 0;
	score_card.upper_total = 0;
	score_card.bonus_score = 0;
	score_card.lower_score = 0;
	score_card.total_score = 0;
	score_card.num_used = 0;

	die_1_img->Enabled = false;
	die_2_img->Enabled = false;
	die_3_img->Enabled = false;
	die_4_img->Enabled = false;
	die_5_img->Enabled = false;

	die_1_img->ImageLocation = "res/one_pip.png";
	die_2_img->ImageLocation = "res/one_pip.png";
	die_3_img->ImageLocation = "res/one_pip.png";
	die_4_img->ImageLocation = "res/one_pip.png";
	die_5_img->ImageLocation = "res/one_pip.png";

	checkBox1->Enabled = true;
	checkBox2->Enabled = true;
	checkBox3->Enabled = true;
	checkBox4->Enabled = true;
	checkBox5->Enabled = true;
	checkBox6->Enabled = true;
	checkBox7->Enabled = true;
	checkBox8->Enabled = true;
	checkBox9->Enabled = true;
	checkBox10->Enabled = true;
	checkBox11->Enabled = true;
	checkBox12->Enabled = true;
	checkBox13->Enabled = true;

	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Checked = false;
	checkBox4->Checked = false;
	checkBox5->Checked = false;
	checkBox6->Checked = false;
	checkBox7->Checked = false;
	checkBox8->Checked = false;
	checkBox9->Checked = false;
	checkBox10->Checked = false;
	checkBox11->Checked = false;
	checkBox12->Checked = false;
	checkBox13->Checked = false;

	label7->Text = "0";
	label8->Text = "";
	label9->Text = "0";
	label17->Text = "0";
	label18->Text = "0";
	label19->Text = "0";
	label1->Text = "";
	label2->Text = "";
	label3->Text = "";
	label4->Text = "";
	label5->Text = "";
	label6->Text = "";
	label10->Text = "";
	label11->Text = "";
	label12->Text = "";
	label13->Text = "";
	label14->Text = "";
	label15->Text = "";
	label16->Text = "";

}

/* select the score to use from the check box */
void usr_intf::select_score(uint8_t score_index)
{
	//if the box is the currently selected, set to false. else, set the current to false, new to true

	if (score_card.sel_ctg == score_index)
	{
		score_card.sel_ctg = -1;
		btn_scr->Enabled = false;
	}
	else
	{
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;

		if (score_card.allow_sel_ctg)
		{
			score_card.sel_ctg = score_index;
			btn_scr->Enabled = true;
			switch (score_index)
			{
			case ACES:
				checkBox1->Checked = true;
				break;
			case TWOS:
				checkBox2->Checked = true;
				break;
			case THREES:
				checkBox3->Checked = true;
				break;
			case FOURS:
				checkBox4->Checked = true;
				break;
			case FIVES:
				checkBox5->Checked = true;
				break;
			case SIXES:
				checkBox6->Checked = true;
				break;
			case THREE_OF_A_KIND:
				checkBox7->Checked = true;
				break;
			case FOUR_OF_A_KIND:
				checkBox8->Checked = true;
				break;
			case FULL_HOUSE:
				checkBox9->Checked = true;
				break;
			case SMALL_STRAIGHT:
				checkBox10->Checked = true;
				break;
			case LARGE_STRAIGHT:
				checkBox11->Checked = true;
				break;
			case YAHTZEE:
				checkBox12->Checked = true;
				break;
			case CHANCE:
				checkBox13->Checked = true;
				break;
			}
		}
		
	}

	

}

/* Roll Button */
System::Void usr_intf::btn_roll_Click(System::Object^  sender, System::EventArgs^  e)
{
	int i;
	System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
	player->SoundLocation = "res/roll_dice.wav";
	player->Load();
	player->Play();

	dice.animation_state = true;
	animator->Enabled = true;

	/* roll dice and update images */
	for (i = 0; i < 5; i++)
	{
		if (!dice.is_sel[i] || dice.roll_num == 1)
		{
			dice.val[i] = roll_die();
		}
	}

	switch (dice.roll_num)
	{
	case 1:
		roll_nmb_lbl->Text = "Roll 1";
		break;
	case 2:
		roll_nmb_lbl->Text = "Roll 2";
		break;
	case 3:
		roll_nmb_lbl->Text = "Roll 3";
		break;
	}

	//update roll number label

	if (dice.roll_num == 3)
	{
		btn_roll->Enabled = false;
		die_1_img->Enabled = false;
		die_2_img->Enabled = false;
		die_3_img->Enabled = false;
		die_4_img->Enabled = false;
		die_5_img->Enabled = false;
	}
	else
	{
		die_1_img->Enabled = true;
		die_2_img->Enabled = true;
		die_3_img->Enabled = true;
		die_4_img->Enabled = true;
		die_5_img->Enabled = true;
	}

	if( (dice.val[0] == dice.val[1])
	 && (dice.val[1] == dice.val[2])
	 && (dice.val[2] == dice.val[3])
	 && (dice.val[3] == dice.val[4]) )
	{
		checkBox12->Enabled = true;
	}

	roll_nmb_lbl->Visible = true;
	score_card.allow_sel_ctg = true;

	update_dice_images();
	dice.roll_num++;

}

void usr_intf::eh_die_click(int die_num)
{
	if (dice.is_sel[die_num - 1])
	{
		dice.is_sel[die_num - 1] = false;
	}
	else
	{
		dice.is_sel[die_num - 1] = true;
	}

	update_dice_images();
	
}

void usr_intf::update_dice_images(void)
{
	int i;
	String^ img_loc;
	array< String^ >^ img_file_name = gcnew array< String^ >(6)
	{
		"res/one_pip.png",
		"res/two_pip.png",
		"res/three_pip.png",
		"res/four_pip.png",
		"res/five_pip.png",
		"res/six_pip.png"
	};
	array< String^ >^ img_sel_file_name = gcnew array< String^ >(6)
	{
		"res/one_pip_sel.png",
		"res/two_pip_sel.png",
		"res/three_pip_sel.png",
		"res/four_pip_sel.png",
		"res/five_pip_sel.png",
		"res/six_pip_sel.png"
	};

	for (i = 0; i < 5; i++)
	{
		if (dice.is_sel[i])
		{
			img_loc = img_sel_file_name[dice.val[i] - 1];
		}
		else
		{
			img_loc = img_file_name[dice.val[i] - 1];
		}
		
		switch (i)
		{
		case 0:
			die_1_img->ImageLocation = img_loc;
			break;
		case 1:
			die_2_img->ImageLocation = img_loc;
			break;
		case 2:
			die_3_img->ImageLocation = img_loc;
			break;
		case 3:
			die_4_img->ImageLocation = img_loc;
			break;
		case 4:
			die_5_img->ImageLocation = img_loc;
			break;
		}
	}
	
}

void usr_intf::eh_btn_scr(void)
{
	int i;

	roll_nmb_lbl->Visible = false;
	btn_scr->Enabled = false;
	dice.roll_num = 1;
	score_card.allow_sel_ctg = false;
	score_card.ctg_is_used[score_card.sel_ctg] = true;
	score_card.num_used++;
	if (score_card.num_used < NUM_CTGS)
	{
		btn_roll->Enabled = true;
	}

	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Checked = false;
	checkBox4->Checked = false;
	checkBox5->Checked = false;
	checkBox6->Checked = false;
	checkBox7->Checked = false;
	checkBox8->Checked = false;
	checkBox9->Checked = false;
	checkBox10->Checked = false;
	checkBox11->Checked = false;
	checkBox12->Checked = false;
	checkBox13->Checked = false;


	switch (score_card.sel_ctg)
	{
	case ACES:
		checkBox1->Enabled = false;
		break;
	case TWOS:
		checkBox2->Enabled = false;
		break;
	case THREES:
		checkBox3->Enabled = false;
		break;
	case FOURS:
		checkBox4->Enabled = false;
		break;
	case FIVES:
		checkBox5->Enabled = false;
		break;
	case SIXES:
		checkBox6->Enabled = false;
		break;
	case THREE_OF_A_KIND:
		checkBox7->Enabled = false;
		break;
	case FOUR_OF_A_KIND:
		checkBox8->Enabled = false;
		break;
	case FULL_HOUSE:
		checkBox9->Enabled = false;
		break;
	case SMALL_STRAIGHT:
		checkBox10->Enabled = false;
		break;
	case LARGE_STRAIGHT:
		checkBox11->Enabled = false;
		break;
	case YAHTZEE:
		checkBox12->Enabled = false;
		break;
	case CHANCE:
		checkBox13->Enabled = false;
		break;
	}

	//score the roll, update the label, and disable the used check box

	score_card.ctg_score[score_card.sel_ctg] = score_roll(dice.val, score_card.sel_ctg, score_card.used_yahtzee);

	if (score_card.sel_ctg == YAHTZEE)
	{
		if (score_card.used_yahtzee)
		{
			score_card.num_used--;
		}
		score_card.used_yahtzee = true;
	}

	if (score_card.sel_ctg <= SIXES)
	{
		score_card.upper_score += score_card.ctg_score[score_card.sel_ctg];
	}
	else
	{
		score_card.lower_score += score_card.ctg_score[score_card.sel_ctg];
	}

	if (score_card.upper_score >= 63)
	{
		score_card.bonus_score = 35;
	}
	score_card.upper_total = score_card.bonus_score + score_card.upper_score;
	score_card.total_score = score_card.lower_score + score_card.upper_total;

	/* update all labels */
	label7->Text = Convert::ToString(score_card.upper_score);
	if (score_card.bonus_score)
	{
		label8->Text = Convert::ToString(score_card.bonus_score);
	}
	label9->Text = Convert::ToString(score_card.upper_total);
	label17->Text = Convert::ToString(score_card.upper_total);
	label18->Text = Convert::ToString(score_card.lower_score);
	label19->Text = Convert::ToString(score_card.total_score);

	for (i = 0; i < NUM_CTGS; i++)
	{
		if (score_card.ctg_is_used[i])
		{
			switch (i)
			{
			case ACES:
				label1->Text = Convert::ToString(score_card.ctg_score[i]);
				break;
			case TWOS:
				label2->Text = Convert::ToString(score_card.ctg_score[i]);
				break;
			case THREES:
				label3->Text = Convert::ToString(score_card.ctg_score[i]);
				break;
			case FOURS:
				label4->Text = Convert::ToString(score_card.ctg_score[i]);
				break;
			case FIVES:
				label5->Text = Convert::ToString(score_card.ctg_score[i]);
				break;
			case SIXES:
				label6->Text = Convert::ToString(score_card.ctg_score[i]);
				break;
			case THREE_OF_A_KIND:
				label10->Text = Convert::ToString(score_card.ctg_score[i]);
				break;
			case FOUR_OF_A_KIND:
				label11->Text = Convert::ToString(score_card.ctg_score[i]);
				break;
			case FULL_HOUSE:
				label12->Text = Convert::ToString(score_card.ctg_score[i]);
				break;
			case SMALL_STRAIGHT:
				label13->Text = Convert::ToString(score_card.ctg_score[i]);
				break;
			case LARGE_STRAIGHT:
				label14->Text = Convert::ToString(score_card.ctg_score[i]);
				break;
			case YAHTZEE:
				label15->Text = Convert::ToString(score_card.ctg_score[i]);
				break;
			case CHANCE:
				label16->Text = Convert::ToString(score_card.ctg_score[i]);
				break;
			}
		}
	}


	for (i = 0; i < 5; i++)
	{
		dice.is_sel[i] = false;
	}

	update_dice_images();
}


void usr_intf::animate_dice(void)
{
	int i;
	String^ img_loc;
	array< String^ >^ img_file_name = gcnew array< String^ >(6)
	{
		"res/one_pip.png",
		"res/two_pip.png",
		"res/three_pip.png",
		"res/four_pip.png",
		"res/five_pip.png",
		"res/six_pip.png"
	};


	if (dice.animation_state)
	{
		for (i = 0; i < 5; i++)
		{
			if (!dice.is_sel[i])
			{
				img_loc = img_file_name[roll_die() - 1];
				switch (i)
				{
				case 0:
					die_1_img->ImageLocation = img_loc;
					break;
				case 1:
					die_2_img->ImageLocation = img_loc;
					break;
				case 2:
					die_3_img->ImageLocation = img_loc;
					break;
				case 3:
					die_4_img->ImageLocation = img_loc;
					break;
				case 4:
					die_5_img->ImageLocation = img_loc;
					break;
				}
			}
		}
		dice.animation_state++;
	}
	if (dice.animation_state >= 5)
	{
		dice.animation_state = false;
		animator->Enabled = false;
		update_dice_images();
	}

}