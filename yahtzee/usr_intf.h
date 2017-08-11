#pragma once

#include <stdint.h>
#include <cstdlib>

#include "yahtzee.h"

namespace yahtzee {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for usr_intf
	/// </summary>
	public ref class usr_intf : public System::Windows::Forms::Form
	{
	public:
		usr_intf(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~usr_intf()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  die_1_img;
	private: System::Windows::Forms::PictureBox^  die_2_img;
	private: System::Windows::Forms::PictureBox^  die_3_img;
	private: System::Windows::Forms::PictureBox^  die_4_img;
	private: System::Windows::Forms::PictureBox^  die_5_img;
	private: System::Windows::Forms::PictureBox^  score_card_img;
	private: System::Windows::Forms::Button^  btn_roll;
	private: System::Windows::Forms::Button^  btn_scr;
	private: System::Windows::Forms::Label^  roll_nmb_lbl;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::CheckBox^  checkBox9;
	private: System::Windows::Forms::CheckBox^  checkBox10;
	private: System::Windows::Forms::CheckBox^  checkBox11;
	private: System::Windows::Forms::CheckBox^  checkBox12;
	private: System::Windows::Forms::CheckBox^  checkBox13;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::Timer^  animator;
	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(usr_intf::typeid));
			this->die_1_img = (gcnew System::Windows::Forms::PictureBox());
			this->score_card_img = (gcnew System::Windows::Forms::PictureBox());
			this->die_2_img = (gcnew System::Windows::Forms::PictureBox());
			this->die_3_img = (gcnew System::Windows::Forms::PictureBox());
			this->die_4_img = (gcnew System::Windows::Forms::PictureBox());
			this->die_5_img = (gcnew System::Windows::Forms::PictureBox());
			this->btn_roll = (gcnew System::Windows::Forms::Button());
			this->btn_scr = (gcnew System::Windows::Forms::Button());
			this->roll_nmb_lbl = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->animator = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->die_1_img))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->score_card_img))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->die_2_img))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->die_3_img))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->die_4_img))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->die_5_img))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// die_1_img
			// 
			this->die_1_img->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"die_1_img.Image")));
			this->die_1_img->Location = System::Drawing::Point(357, 86);
			this->die_1_img->Name = L"die_1_img";
			this->die_1_img->Size = System::Drawing::Size(64, 64);
			this->die_1_img->TabIndex = 0;
			this->die_1_img->TabStop = false;
			this->die_1_img->Click += gcnew System::EventHandler(this, &usr_intf::die_1_img_Click);
			// 
			// score_card_img
			// 
			this->score_card_img->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"score_card_img.Image")));
			this->score_card_img->Location = System::Drawing::Point(12, 37);
			this->score_card_img->Name = L"score_card_img";
			this->score_card_img->Size = System::Drawing::Size(265, 550);
			this->score_card_img->TabIndex = 1;
			this->score_card_img->TabStop = false;
			// 
			// die_2_img
			// 
			this->die_2_img->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"die_2_img.Image")));
			this->die_2_img->Location = System::Drawing::Point(357, 179);
			this->die_2_img->Name = L"die_2_img";
			this->die_2_img->Size = System::Drawing::Size(64, 64);
			this->die_2_img->TabIndex = 2;
			this->die_2_img->TabStop = false;
			this->die_2_img->Click += gcnew System::EventHandler(this, &usr_intf::die_2_img_Click);
			// 
			// die_3_img
			// 
			this->die_3_img->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"die_3_img.Image")));
			this->die_3_img->Location = System::Drawing::Point(357, 272);
			this->die_3_img->Name = L"die_3_img";
			this->die_3_img->Size = System::Drawing::Size(64, 64);
			this->die_3_img->TabIndex = 3;
			this->die_3_img->TabStop = false;
			this->die_3_img->Click += gcnew System::EventHandler(this, &usr_intf::die_3_img_Click);
			// 
			// die_4_img
			// 
			this->die_4_img->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"die_4_img.Image")));
			this->die_4_img->Location = System::Drawing::Point(357, 365);
			this->die_4_img->Name = L"die_4_img";
			this->die_4_img->Size = System::Drawing::Size(64, 64);
			this->die_4_img->TabIndex = 4;
			this->die_4_img->TabStop = false;
			this->die_4_img->Click += gcnew System::EventHandler(this, &usr_intf::die_4_img_Click);
			// 
			// die_5_img
			// 
			this->die_5_img->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"die_5_img.Image")));
			this->die_5_img->Location = System::Drawing::Point(358, 458);
			this->die_5_img->Name = L"die_5_img";
			this->die_5_img->Size = System::Drawing::Size(64, 64);
			this->die_5_img->TabIndex = 5;
			this->die_5_img->TabStop = false;
			this->die_5_img->Click += gcnew System::EventHandler(this, &usr_intf::die_5_img_Click);
			// 
			// btn_roll
			// 
			this->btn_roll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_roll->Location = System::Drawing::Point(307, 551);
			this->btn_roll->Name = L"btn_roll";
			this->btn_roll->Size = System::Drawing::Size(68, 34);
			this->btn_roll->TabIndex = 6;
			this->btn_roll->Text = L"Roll";
			this->btn_roll->UseVisualStyleBackColor = true;
			this->btn_roll->Click += gcnew System::EventHandler(this, &usr_intf::btn_roll_Click);
			// 
			// btn_scr
			// 
			this->btn_scr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_scr->Location = System::Drawing::Point(407, 553);
			this->btn_scr->Name = L"btn_scr";
			this->btn_scr->Size = System::Drawing::Size(68, 34);
			this->btn_scr->TabIndex = 7;
			this->btn_scr->Text = L"Score";
			this->btn_scr->UseVisualStyleBackColor = true;
			this->btn_scr->Click += gcnew System::EventHandler(this, &usr_intf::btn_scr_Click);
			// 
			// roll_nmb_lbl
			// 
			this->roll_nmb_lbl->AutoSize = true;
			this->roll_nmb_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roll_nmb_lbl->ForeColor = System::Drawing::SystemColors::ControlText;
			this->roll_nmb_lbl->Location = System::Drawing::Point(361, 37);
			this->roll_nmb_lbl->Name = L"roll_nmb_lbl";
			this->roll_nmb_lbl->Size = System::Drawing::Size(57, 24);
			this->roll_nmb_lbl->TabIndex = 8;
			this->roll_nmb_lbl->Text = L"Roll 1";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox1->Location = System::Drawing::Point(25, 99);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->Click += gcnew System::EventHandler(this, &usr_intf::checkBox1_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox2->Location = System::Drawing::Point(25, 124);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 10;
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->Click += gcnew System::EventHandler(this, &usr_intf::checkBox2_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox3->Location = System::Drawing::Point(25, 148);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 11;
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->Click += gcnew System::EventHandler(this, &usr_intf::checkBox3_Click);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox4->Location = System::Drawing::Point(25, 173);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 12;
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->Click += gcnew System::EventHandler(this, &usr_intf::checkBox4_Click);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox5->Location = System::Drawing::Point(25, 197);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 13;
			this->checkBox5->UseVisualStyleBackColor = false;
			this->checkBox5->Click += gcnew System::EventHandler(this, &usr_intf::checkBox5_Click);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox6->Location = System::Drawing::Point(25, 222);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(15, 14);
			this->checkBox6->TabIndex = 14;
			this->checkBox6->UseVisualStyleBackColor = false;
			this->checkBox6->Click += gcnew System::EventHandler(this, &usr_intf::checkBox6_Click);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox7->Location = System::Drawing::Point(25, 344);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(15, 14);
			this->checkBox7->TabIndex = 15;
			this->checkBox7->UseVisualStyleBackColor = false;
			this->checkBox7->Click += gcnew System::EventHandler(this, &usr_intf::checkBox7_Click);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox8->Location = System::Drawing::Point(25, 369);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(15, 14);
			this->checkBox8->TabIndex = 16;
			this->checkBox8->UseVisualStyleBackColor = false;
			this->checkBox8->Click += gcnew System::EventHandler(this, &usr_intf::checkBox8_Click);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox9->Location = System::Drawing::Point(25, 393);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(15, 14);
			this->checkBox9->TabIndex = 17;
			this->checkBox9->UseVisualStyleBackColor = false;
			this->checkBox9->Click += gcnew System::EventHandler(this, &usr_intf::checkBox9_Click);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox10->Location = System::Drawing::Point(25, 418);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(15, 14);
			this->checkBox10->TabIndex = 18;
			this->checkBox10->UseVisualStyleBackColor = false;
			this->checkBox10->Click += gcnew System::EventHandler(this, &usr_intf::checkBox10_Click);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox11->Location = System::Drawing::Point(25, 442);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(15, 14);
			this->checkBox11->TabIndex = 19;
			this->checkBox11->UseVisualStyleBackColor = false;
			this->checkBox11->Click += gcnew System::EventHandler(this, &usr_intf::checkBox11_Click);
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox12->Location = System::Drawing::Point(25, 467);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(15, 14);
			this->checkBox12->TabIndex = 20;
			this->checkBox12->UseVisualStyleBackColor = false;
			this->checkBox12->Click += gcnew System::EventHandler(this, &usr_intf::checkBox12_Click);
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->BackColor = System::Drawing::SystemColors::Window;
			this->checkBox13->Location = System::Drawing::Point(25, 491);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(15, 14);
			this->checkBox13->TabIndex = 21;
			this->checkBox13->UseVisualStyleBackColor = false;
			this->checkBox13->Click += gcnew System::EventHandler(this, &usr_intf::checkBox13_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->Location = System::Drawing::Point(234, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 22;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Window;
			this->label2->Location = System::Drawing::Point(234, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Window;
			this->label3->Location = System::Drawing::Point(234, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 24;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Window;
			this->label4->Location = System::Drawing::Point(234, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Window;
			this->label5->Location = System::Drawing::Point(234, 197);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 26;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Window;
			this->label6->Location = System::Drawing::Point(234, 222);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 27;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Window;
			this->label7->Location = System::Drawing::Point(234, 247);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 28;
			this->label7->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Window;
			this->label8->Location = System::Drawing::Point(234, 269);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 29;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Window;
			this->label9->Location = System::Drawing::Point(234, 290);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 30;
			this->label9->Text = L"0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Window;
			this->label10->Location = System::Drawing::Point(234, 345);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 31;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::Window;
			this->label11->Location = System::Drawing::Point(234, 370);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 13);
			this->label11->TabIndex = 32;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::Window;
			this->label12->Location = System::Drawing::Point(234, 394);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 13);
			this->label12->TabIndex = 33;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::Window;
			this->label13->Location = System::Drawing::Point(234, 419);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 13);
			this->label13->TabIndex = 34;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::Window;
			this->label14->Location = System::Drawing::Point(234, 443);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 13);
			this->label14->TabIndex = 35;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::Window;
			this->label15->Location = System::Drawing::Point(234, 467);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 13);
			this->label15->TabIndex = 36;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::Window;
			this->label16->Location = System::Drawing::Point(234, 492);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 13);
			this->label16->TabIndex = 37;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::Window;
			this->label17->Location = System::Drawing::Point(234, 541);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 38;
			this->label17->Text = L"0";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::Window;
			this->label18->Location = System::Drawing::Point(234, 516);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 39;
			this->label18->Text = L"0";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::Window;
			this->label19->Location = System::Drawing::Point(234, 565);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(13, 13);
			this->label19->TabIndex = 40;
			this->label19->Text = L"0";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(500, 24);
			this->menuStrip1->TabIndex = 41;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newGameToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->newGameToolStripMenuItem->Text = L"New Game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &usr_intf::newGameToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &usr_intf::exitToolStripMenuItem_Click);
			// 
			// animator
			// 
			this->animator->Interval = 50;
			this->animator->Tick += gcnew System::EventHandler(this, &usr_intf::animator_Tick);
			// 
			// usr_intf
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->ClientSize = System::Drawing::Size(500, 598);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox13);
			this->Controls->Add(this->checkBox12);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->roll_nmb_lbl);
			this->Controls->Add(this->btn_scr);
			this->Controls->Add(this->btn_roll);
			this->Controls->Add(this->die_5_img);
			this->Controls->Add(this->die_4_img);
			this->Controls->Add(this->die_3_img);
			this->Controls->Add(this->die_2_img);
			this->Controls->Add(this->score_card_img);
			this->Controls->Add(this->die_1_img);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"usr_intf";
			this->Text = L"Yahtzee";
			this->Load += gcnew System::EventHandler(this, &usr_intf::usr_intf_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->die_1_img))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->score_card_img))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->die_2_img))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->die_3_img))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->die_4_img))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->die_5_img))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

void update_dice_images(void);

void eh_die_click(int die_num);

void eh_btn_scr(void);

void select_score(uint8_t score_index);

void init_game(void);

void animate_dice(void);

	private: System::Void usr_intf_Load(System::Object^  sender, System::EventArgs^  e)
	{

	}

	private: System::Void btn_roll_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void die_1_img_Click(System::Object^  sender, System::EventArgs^  e)
	{
		eh_die_click(1);
	}
	private: System::Void die_2_img_Click(System::Object^  sender, System::EventArgs^  e)
	{
		eh_die_click(2);
	}
	private: System::Void die_3_img_Click(System::Object^  sender, System::EventArgs^  e)
	{
		eh_die_click(3);
	}
	private: System::Void die_4_img_Click(System::Object^  sender, System::EventArgs^  e)
	{
		eh_die_click(4);
	}
	private: System::Void die_5_img_Click(System::Object^  sender, System::EventArgs^  e)
	{
		eh_die_click(5);
	}
	private: System::Void btn_scr_Click(System::Object^  sender, System::EventArgs^  e)
	{
		eh_btn_scr();
	}

	private: System::Void checkBox1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		select_score(ACES);
	}

	private: System::Void checkBox2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		select_score(TWOS);
	}

	private: System::Void checkBox3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		select_score(THREES);
	}

	private: System::Void checkBox4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		select_score(FOURS);
	}

	private: System::Void checkBox5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		select_score(FIVES);
	}

	private: System::Void checkBox6_Click(System::Object^  sender, System::EventArgs^  e)
	{
		select_score(SIXES);
	}

	private: System::Void checkBox7_Click(System::Object^  sender, System::EventArgs^  e)
	{
		select_score(THREE_OF_A_KIND);
	}

	private: System::Void checkBox8_Click(System::Object^  sender, System::EventArgs^  e)
	{
		select_score(FOUR_OF_A_KIND);
	}

	private: System::Void checkBox9_Click(System::Object^  sender, System::EventArgs^  e)
	{
		select_score(FULL_HOUSE);
	}

	private: System::Void checkBox10_Click(System::Object^  sender, System::EventArgs^  e)
	{
		select_score(SMALL_STRAIGHT);
	}

	private: System::Void checkBox11_Click(System::Object^  sender, System::EventArgs^  e)
	{
		select_score(LARGE_STRAIGHT);
	}

	private: System::Void checkBox12_Click(System::Object^  sender, System::EventArgs^  e)
	{
		select_score(YAHTZEE);
	}

	private: System::Void checkBox13_Click(System::Object^  sender, System::EventArgs^  e)
	{
		select_score(CHANCE);
	}


	private: System::Void newGameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		init_game();
	}

	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		exit(0);
	}

	private: System::Void animator_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		animate_dice();
	}
};
}
