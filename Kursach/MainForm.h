#pragma once
#include"BreedMap.h"
/*this->dataGridView1->RowCount = 30;
			this->dataGridView1->ColumnCount = 30;*/

namespace Kursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class MainForm : public System::Windows::Forms::Form
	{
		BreedMap^ Map;
		BreedMap^ NewMap;
		int random;
		int rows;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::ToolStripMenuItem^  ğóæüåÈÏîãëîòèòåëüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïóëüñàğToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  áàêåíûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ãàëàêòèêàÊîêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïåíòàäåêàòëîíToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  çâåçäàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  êğåñòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÷àñûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ğàçìåğToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñğåäíèé30õ30ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñğåíèé40õ40ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  êğóïíûé100õ100ToolStripMenuItem;
			 int columns;

	public:
		MainForm(void)
		{
			InitializeComponent();
			Map = gcnew BreedMap;
			NewMap = gcnew BreedMap;
			random = 100;
			rows = 30;
			columns = 30;
			Map->Col = columns;
			Map->Row = rows;
			NewMap->Col = columns;
			NewMap->Row = rows;
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  çàãğóçèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  îÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âûõîäToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Òğåáóåòñÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Îáÿçàòåëüíûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà - íå èçìåíÿéòå
		/// ñîäåğæèìîå äàííîãî ìåòîäà ïğè ïîìîùè ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàãğóçèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğóæüåÈÏîãëîòèòåëüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïóëüñàğToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áàêåíûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ãàëàêòèêàÊîêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïåíòàäåêàòëîíToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çâåçäàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êğåñòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷àñûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğàçìåğToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñğåäíèé30õ30ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñğåíèé40õ40ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êğóïíûé100õ100ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(12, 46);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(633, 603);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellClick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ìåíşToolStripMenuItem,
					this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(903, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ñîõğàíèòüToolStripMenuItem,
					this->çàãğóçèòüToolStripMenuItem, this->ğàçìåğToolStripMenuItem, this->toolStripMenuItem1, this->îÏğîãğàììåToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ìåíşToolStripMenuItem->Text = L"Ìåíş";
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"Ñîõğàíèòü";
			this->ñîõğàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ñîõğàíèòüToolStripMenuItem_Click);
			// 
			// çàãğóçèòüToolStripMenuItem
			// 
			this->çàãğóçèòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->ğóæüåÈÏîãëîòèòåëüToolStripMenuItem,
					this->ïóëüñàğToolStripMenuItem, this->áàêåíûToolStripMenuItem, this->ãàëàêòèêàÊîêàToolStripMenuItem, this->ïåíòàäåêàòëîíToolStripMenuItem,
					this->çâåçäàToolStripMenuItem, this->êğåñòToolStripMenuItem, this->÷àñûToolStripMenuItem
			});
			this->çàãğóçèòüToolStripMenuItem->Name = L"çàãğóçèòüToolStripMenuItem";
			this->çàãğóçèòüToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->çàãğóçèòüToolStripMenuItem->Text = L"Çàãğóçèòü";
			// 
			// ğóæüåÈÏîãëîòèòåëüToolStripMenuItem
			// 
			this->ğóæüåÈÏîãëîòèòåëüToolStripMenuItem->Name = L"ğóæüåÈÏîãëîòèòåëüToolStripMenuItem";
			this->ğóæüåÈÏîãëîòèòåëüToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->ğóæüåÈÏîãëîòèòåëüToolStripMenuItem->Text = L"Ğóæüå è ïîãëîòèòåëü";
			this->ğóæüåÈÏîãëîòèòåëüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ğóæüåÈÏîãëîòèòåëüToolStripMenuItem_Click);
			// 
			// ïóëüñàğToolStripMenuItem
			// 
			this->ïóëüñàğToolStripMenuItem->Name = L"ïóëüñàğToolStripMenuItem";
			this->ïóëüñàğToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->ïóëüñàğToolStripMenuItem->Text = L"Ïóëüñàğ";
			this->ïóëüñàğToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ïóëüñàğToolStripMenuItem_Click);
			// 
			// áàêåíûToolStripMenuItem
			// 
			this->áàêåíûToolStripMenuItem->Name = L"áàêåíûToolStripMenuItem";
			this->áàêåíûToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->áàêåíûToolStripMenuItem->Text = L"Âîñüì¸ğêà";
			this->áàêåíûToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::áàêåíûToolStripMenuItem_Click);
			// 
			// ãàëàêòèêàÊîêàToolStripMenuItem
			// 
			this->ãàëàêòèêàÊîêàToolStripMenuItem->Name = L"ãàëàêòèêàÊîêàToolStripMenuItem";
			this->ãàëàêòèêàÊîêàToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->ãàëàêòèêàÊîêàToolStripMenuItem->Text = L"Ãàëàêòèêà Êîêà";
			this->ãàëàêòèêàÊîêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ãàëàêòèêàÊîêàToolStripMenuItem_Click);
			// 
			// ïåíòàäåêàòëîíToolStripMenuItem
			// 
			this->ïåíòàäåêàòëîíToolStripMenuItem->Name = L"ïåíòàäåêàòëîíToolStripMenuItem";
			this->ïåíòàäåêàòëîíToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->ïåíòàäåêàòëîíToolStripMenuItem->Text = L"Ïåíòàäåêàòëîí";
			this->ïåíòàäåêàòëîíToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ïåíòàäåêàòëîíToolStripMenuItem_Click);
			// 
			// çâåçäàToolStripMenuItem
			// 
			this->çâåçäàToolStripMenuItem->Name = L"çâåçäàToolStripMenuItem";
			this->çâåçäàToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->çâåçäàToolStripMenuItem->Text = L"Çâåçäà";
			this->çâåçäàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::çâåçäàToolStripMenuItem_Click);
			// 
			// êğåñòToolStripMenuItem
			// 
			this->êğåñòToolStripMenuItem->Name = L"êğåñòToolStripMenuItem";
			this->êğåñòToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->êğåñòToolStripMenuItem->Text = L"Êğåñò";
			this->êğåñòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::êğåñòToolStripMenuItem_Click);
			// 
			// ÷àñûToolStripMenuItem
			// 
			this->÷àñûToolStripMenuItem->Name = L"÷àñûToolStripMenuItem";
			this->÷àñûToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->÷àñûToolStripMenuItem->Text = L"×àñû";
			this->÷àñûToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::÷àñûToolStripMenuItem_Click);
			// 
			// ğàçìåğToolStripMenuItem
			// 
			this->ğàçìåğToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñğåäíèé30õ30ToolStripMenuItem,
					this->ñğåíèé40õ40ToolStripMenuItem, this->êğóïíûé100õ100ToolStripMenuItem
			});
			this->ğàçìåğToolStripMenuItem->Name = L"ğàçìåğToolStripMenuItem";
			this->ğàçìåğToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ğàçìåğToolStripMenuItem->Text = L"Ğàçìåğ";
			// 
			// ñğåäíèé30õ30ToolStripMenuItem
			// 
			this->ñğåäíèé30õ30ToolStripMenuItem->Name = L"ñğåäíèé30õ30ToolStripMenuItem";
			this->ñğåäíèé30õ30ToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->ñğåäíèé30õ30ToolStripMenuItem->Text = L"Ìàëåíüêèé (30õ30)";
			this->ñğåäíèé30õ30ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ñğåäíèé30õ30ToolStripMenuItem_Click);
			// 
			// ñğåíèé40õ40ToolStripMenuItem
			// 
			this->ñğåíèé40õ40ToolStripMenuItem->Name = L"ñğåíèé40õ40ToolStripMenuItem";
			this->ñğåíèé40õ40ToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->ñğåíèé40õ40ToolStripMenuItem->Text = L"Ñğåíèé (40õ40)";
			this->ñğåíèé40õ40ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ñğåíèé40õ40ToolStripMenuItem_Click);
			// 
			// êğóïíûé100õ100ToolStripMenuItem
			// 
			this->êğóïíûé100õ100ToolStripMenuItem->Enabled = false;
			this->êğóïíûé100õ100ToolStripMenuItem->Name = L"êğóïíûé100õ100ToolStripMenuItem";
			this->êğóïíûé100õ100ToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->êğóïíûé100õ100ToolStripMenuItem->Text = L"Êğóïíûé (100õ100)";
			this->êğóïíûé100õ100ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::êğóïíûé100õ100ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(149, 6);
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::âûõîäToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(651, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(732, 46);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(813, 46);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 32);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(45, 17);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Fast";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(81, 32);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(56, 17);
			this->radioButton2->TabIndex = 6;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Middle";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(162, 32);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(48, 17);
			this->radioButton3->TabIndex = 7;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Slow";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton3_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"(Ïî óìîë÷àíèş-Middle)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(651, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Âûáåğèòå öâåò:";
			// 
			// listBox1
			// 
			this->listBox1->ColumnWidth = 119;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Aquamarine", L"Black", L"Blue", L"Chocolate",
					L"Coral", L"DarkOrchid", L"Salmon", L"Green", L"Red", L"Pink"
			});
			this->listBox1->Location = System::Drawing::Point(651, 149);
			this->listBox1->MultiColumn = true;
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(238, 95);
			this->listBox1->TabIndex = 11;
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Æèâûå êëåòêè:" });
			this->listBox2->Location = System::Drawing::Point(651, 341);
			this->listBox2->MultiColumn = true;
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(238, 212);
			this->listBox2->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(651, 325);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Æèâûå êëåòêè:";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(6, 19);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(45, 17);
			this->radioButton5->TabIndex = 15;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"30%";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(57, 19);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(45, 17);
			this->radioButton6->TabIndex = 16;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"45%";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton6_CheckedChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(651, 299);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(238, 23);
			this->button4->TabIndex = 17;
			this->button4->Text = L"RandomMap";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(108, 19);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(45, 17);
			this->radioButton7->TabIndex = 18;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"60%";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton7_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(159, 19);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(45, 17);
			this->radioButton8->TabIndex = 19;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"75%";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton8_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Location = System::Drawing::Point(651, 75);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(238, 55);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Âûáåğèòå ñêîğîñòü:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton8);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Location = System::Drawing::Point(651, 250);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(240, 43);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Äîëÿ çàíÿòîé ïëîùàäè:";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(903, 665);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"Êëåòî÷íûé àâòîìàò";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		radioButton2->Checked = true;
		this->dataGridView1->RowCount = rows;
		this->dataGridView1->ColumnCount = columns;
	}

	private: System::Void âûõîäToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Stop();
		System::Windows::Forms::DialogResult result;
		result = MessageBox::Show("Âû óâåğåíû, ÷òî õîòèòå âûéòè?", "Form Closing", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		}
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Start();
		//Map->Update(this->dataGridView1, listBox2, NewMap);
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Stop();

		System::Windows::Forms::DialogResult result1;
		result1 = MessageBox::Show("Âû óâåğåíû, ÷òî õîòèòå î÷èñòèòü ñïèñîê?", "Form Cleaning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result1 == System::Windows::Forms::DialogResult::Yes) {
			Map->Del();
			NewMap->Del();
			listBox2->Items->Clear();
		
		for
			(int i = 0; i < dataGridView1->RowCount; i++) {
			for (int j = 0; j < dataGridView1->ColumnCount; j++){
				dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Drawing::Color::White;
				dataGridView1->Rows[i]->Cells[j]->Value = "";
			}

		}
	}
}


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Stop();
}
		
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 Map->Update(this->dataGridView1, listBox2, NewMap);
			 
}

private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 int i = this->dataGridView1->CurrentCell->RowIndex;
			 int j = this->dataGridView1->CurrentCell->ColumnIndex;
			 Cell^ C = gcnew Cell(i, j);
			 dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Drawing::Color::Salmon;
			 Map->Add(C);
}
private: System::Void MainForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Interval = 2000;
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Interval = 600;
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Interval = 250;
}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 random = rows*columns*0.15;
}
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 random = rows*columns*0.3;
}
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 random = rows*columns*0.45;
}
private: System::Void radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 random = rows*columns*0.6;
}
private: System::Void radioButton8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 random = rows*columns*0.75;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			  Map->RandomGenerate(random);
			  timer1->Start();
}
private: System::Void áàêåíûToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Map->LoadMap("Vosmerka.txt");
			 timer1->Start();
}
private: System::Void ñîõğàíèòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Map->SaveMap("NewMap.txt");
}
private: System::Void ïóëüñàğToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Map->LoadMap("Pulsar.txt");
			 timer1->Start();
}
private: System::Void ãàëàêòèêàÊîêàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Map->LoadMap("GalaktikaKoka.txt");
			 timer1->Start();
}
private: System::Void ïåíòàäåêàòëîíToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Map->LoadMap("Penta.txt");
			 timer1->Start();
}
private: System::Void çâåçäàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Map->LoadMap("Zvezda.txt");
			 timer1->Start();
}
private: System::Void êğåñòToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Map->LoadMap("Krest.txt");
			 timer1->Start();
}
private: System::Void ÷àñûToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Map->LoadMap("Clock.txt");
			 timer1->Start();
}
private: System::Void ñğåäíèé30õ30ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 rows = 30;
			 columns = 30;
			 Map->Col = columns;
			 Map->Row = rows;
			 NewMap->Col = columns;
			 NewMap->Row = rows;
			 MainForm_Load(sender, e);
}
private: System::Void ñğåíèé40õ40ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 rows = 40;
			 columns = 40;
			 Map->Col = columns;
			 Map->Row = rows;
			 NewMap->Col = columns;
			 NewMap->Row = rows;
			 MainForm_Load(sender, e);
			 
}
private: System::Void êğóïíûé100õ100ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 rows = 100;
			 columns = 100;
			 Map->Col = columns;
			 Map->Row = rows;
			 NewMap->Col = columns;
			 NewMap->Row = rows;
			 MainForm_Load(sender, e);
}
private: System::Void ğóæüåÈÏîãëîòèòåëüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 ñğåíèé40õ40ToolStripMenuItem_Click(sender, e);
			 Map->LoadMap("Gun.txt");
			 timer1->Start();
}
};

}
