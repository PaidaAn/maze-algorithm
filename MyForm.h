#pragma once
#include <iostream>
#include <random>
struct mospot {
	int dx; int dy; int dir;
};
struct randpot {
	int dx; int dy; int dir; int f;
};
namespace HW409360776陳宇安 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Timer^ timer1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ checkBox2;


	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(12, 76);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(398, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"選擇迷宮檔案";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(12, 21);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(398, 49);
			this->listBox1->TabIndex = 1;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->Location = System::Drawing::Point(3, 3);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Transparent;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Transparent;
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView2->RowTemplate->Height = 27;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView2->Size = System::Drawing::Size(833, 813);
			this->dataGridView2->TabIndex = 2;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Right;
			this->tabControl1->Location = System::Drawing::Point(416, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(847, 821);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(839, 792);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"老鼠座標";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(3, 3);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(833, 786);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(839, 819);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"迷宮";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(12, 258);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(398, 45);
			this->button2->TabIndex = 4;
			this->button2->Text = L"模擬老鼠走迷宮";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(12, 309);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(195, 45);
			this->button3->TabIndex = 5;
			this->button3->Text = L"畫出老鼠路徑";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(215, 309);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(195, 45);
			this->button4->TabIndex = 6;
			this->button4->Text = L"畫出正確路徑";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 10;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox1->Location = System::Drawing::Point(12, 127);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(398, 125);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"隨機製作迷宮";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(220, 65);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(144, 46);
			this->button6->TabIndex = 5;
			this->button6->Text = L"輸出迷宮";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(25, 65);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(189, 46);
			this->button5->TabIndex = 4;
			this->button5->Text = L"生成迷宮";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(254, 23);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(110, 27);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(59, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(110, 27);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(216, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"p=";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"m=";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(6, 62);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(149, 19);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"啟用鍵盤控制老鼠";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Location = System::Drawing::Point(12, 369);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(398, 139);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"小遊戲";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(93, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(212, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"使用WASD來控制老鼠";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(203, 62);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(140, 19);
			this->checkBox2->TabIndex = 9;
			this->checkBox2->Text = L"自動接續下一關\?";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1263, 821);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int** maze;
		int m=1, p=1, top = -1, Time = 4,step, x = 1, y = 0;
		bool Maze = false, mouse = false, out = false;
		mospot* stack; randpot* rstack;
		void push(mospot a) {
			stack[++top].dx = a.dx;
			stack[top].dy = a.dy;
			stack[top].dir = a.dir;
		}
		mospot pop() {
			return stack[top--];
		}
		void rpush(randpot a) {
			rstack[++top].dx = a.dx;
			rstack[top].dy = a.dy;
			rstack[top].dir = a.dir;
			rstack[top].f = a.f;
		}
		randpot rpop() {
			return rstack[top--];
		}

		void MakeMaze(int m, int p) {
			Maze = true; mouse = false;
			maze[1][0] = 0;
			maze[m][p + 1] = 0;
			for (int i = 0; i < m + 2; i++) {
				for (int j = 0; j < p + 2; j++) {
					if (maze[i][j] == 2) {
						dataGridView2->Rows[i]->Cells[j]->Style->BackColor = Color::Black;
						dataGridView2->Rows[i]->Cells[j]->Value = maze[i][j];
					}
					else {
						dataGridView2->Rows[i]->Cells[j]->Value = maze[i][j];
						if (maze[i][j] == 1) dataGridView2->Rows[i]->Cells[j]->Style->BackColor = Color::DimGray;
						else dataGridView2->Rows[i]->Cells[j]->Style->BackColor = Color::LightGray;
					}
				}
			}
			dataGridView2->Rows[1]->Cells[0]->Value = "@";
		}
		void randomMaze() {
			std::random_device rd;
			std::default_random_engine gen = std::default_random_engine(rd());
			std::uniform_int_distribution<int> dis(1, 4);
			std::uniform_int_distribution<int> Length(10, 30);
			int row[6] = { 0,-1,0,1,0,-1 };
			int col[6] = { -1,0,1,0,-1,0 };
			rstack = new randpot[(m + 1) * (p + 1)];
			randpot randmos;
			randmos.dx = 1; randmos.dy = 1; randmos.dir = dis(gen); randmos.f = 0;
			maze[randmos.dx][randmos.dy] = 0;
			top = -1;
			rpush(randmos);
			while (top != -1) {
				randmos = rpop();
				int x = randmos.dx;
				int y = randmos.dy;
				int d = randmos.dir;
				int f = randmos.f;
				int len = Length(gen);
				while (f < 19) {
					if (maze[x + row[d]][y + col[d]] == 1 &&
						maze[x + row[d] * 2][y + col[d] * 2] != 0 &&
						maze[x + row[d] + row[d + 1]][y + col[d] + col[d + 1]] != 0 &&
						//maze[x + row[d] + row[d + 1] + row[d]][y + col[d] + col[d + 1] + col[d]] != 0 &&
						maze[x + row[d] + row[d - 1]][y + col[d] + col[d - 1]] != 0 //&&
						//maze[x + row[d] + row[d - 1] + row[d]][y + col[d] + col[d - 1] + col[d]] != 0 
						) {
						randmos.dir = d;
						randmos.f = f;
						rpush(randmos);
						maze[randmos.dx + row[d]][randmos.dy + col[d]] = 0;
						randmos.dx += row[d];
						randmos.dy += col[d];
						randmos.dir = dis(gen);
						randmos.f = dis(gen);
						x = randmos.dx;
						y = randmos.dy;
						d = randmos.dir;
						f = randmos.f;
						continue;
					}
					else {
						f++;
						d = dis(gen);
					}
					len--;
					if (len == 0)break;
				}
			}
			top = -1;
			MakeMaze(m, p);
		}
		bool CheckText(String^ c) {
			for (int i = 0; i < c->Length; i++) {
				if (!isdigit(c[i])) { return 0; }
			}
			return 1;
		}
		bool CheckWall() {
			if (Convert::ToString(dataGridView2->Rows[x]->Cells[y]->Value) == "0" ||
				Convert::ToString(dataGridView2->Rows[x]->Cells[y]->Value) == "@")return true;
			else return false;
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e){
		x = 1; y = 0;
		String^ a;
		char* fname;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){ // 順利開啟檔案才繼續往下做
			if (maze) {
				for (int i = m + 1; i >= 0; i--) {
					delete[] maze[i];
				}
				delete[] maze;
			}
			a = openFileDialog1->FileName;
			char* str2 = (char*)(void*)Marshal::StringToHGlobalAnsi(a);
			FILE* fp = fopen(str2, "r"); // 讀檔, 注意第二參數為 "r" (read) 
			// fopen 需要檔名以 char * 型態為參數
			if (fp){
				fscanf(fp, "%d %d", &m, &p);
				listBox1->Items->Add("m=" + m + " p=" + p);
				listBox1->Items->Add("input file :" + a);
				dataGridView2->RowCount = m + 2;
				dataGridView2->ColumnCount = p + 2;

				maze = new int* [m+2];
				for (int i = 0; i < m+2; i++) {
					maze[i] = new int[p + 2];
					for (int j = 0; j < p + 2; j++) {
						if (i == 0 || i == m + 1 || j == 0 || j == p + 1)maze[i][j] = 2;
						else maze[i][j] = 1;
					}
				}

				for (int i = 1; i <= m; i++){
					for (int j = 1; j <= p; j++)
					{
						fscanf(fp, "%d", &maze[i][j]);
					}
				}
				fclose(fp);   // 讀完檔後請關檔

				MakeMaze(m, p);
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!mouse && Maze) {
			top = -1;
			richTextBox1->Clear();
			mouse = true;
			int row[4] = { -1,0,1,0 };
			int col[4] = { 0,1,0,-1 };
			wchar_t Dir[4] = { 'N','E','S','W' };
			delete[] stack;
			step = 5;
			stack = new mospot[(m + 1) * (p + 1)];
			mospot nowpot;
			nowpot.dx = 1; nowpot.dy = 0; nowpot.dir = 1;
			push(nowpot);
			while (top != -1) {
				nowpot = pop();
				int i = nowpot.dx;
				int j = nowpot.dy;
				int d = nowpot.dir;
				while (d < 4) {

					if (maze[i + row[d]][j + col[d]] == 0) {
						nowpot.dir = d;
						push(nowpot);
						//maze[nowpot.dx][nowpot.dy] = step++;

						richTextBox1->AppendText(stack[top].dx + " " + stack[top].dy + " " + Dir[stack[top].dir] + "\n");

						nowpot.dx += row[d];
						nowpot.dy += col[d];
						maze[nowpot.dx][nowpot.dy] = step++;
						if (nowpot.dx == m && nowpot.dy == p + 1) {
							nowpot.dir = d;
							push(nowpot);
							break;
						}
						i = nowpot.dx;
						j = nowpot.dy;
						d = 0;
						continue;
					}
					else d++;
					if (nowpot.dx == m && nowpot.dy == p + 1)break;
				}
				if (nowpot.dx == m && nowpot.dy == p + 1)break;
			}
			if (top == -1) {
				MessageBox::Show("此迷宮沒有出路");
				out = false;
			}
			if (nowpot.dx == m && nowpot.dy == p + 1) {
				maze[1][0] = 4;
				MessageBox::Show("老鼠找到路了");
				out = true;
			}
		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		//DataGridViewImageColumn^ img = gcnew DataGridViewImageColumn();
		//Image^ image = Image::FromFile("rat.png");
		//img->Image = image;
		if (Time < step) {
			for (int i = 0; i < m + 2; i++) 
			for (int j = 0; j < p + 2; j++) {
				if (maze[i][j] == Time) {
					dataGridView2->Rows[i]->Cells[j]->Style->BackColor = Color::Yellow;
					dataGridView2->Rows[i]->Cells[j]->Value = "@";
					//dataGridView2->Rows[i]->Cells[j]->Value = img;
					//dataGridView2->Columns->Add (img);
				}
				if (maze[i][j] == Time-1 && Time >= 4)
					dataGridView2->Rows[i]->Cells[j]->Value = "0";
			}
		}
		else {
			timer1->Stop();
		}
		Time++;
	}

	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		dataGridView2->Rows[stack[Time].dx]->Cells[stack[Time].dy]->Style->BackColor = Color::Red;
		if (Time == top)timer2->Stop();
		Time++;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (mouse && !(timer2->Enabled)) {
			Time = 4;
			timer1->Start();
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (out && mouse && !(timer1->Enabled)) {
			Time = 0;
			timer2->Start();
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		x = 1; y = 0;
		if (maze) {
			for (int i = m + 1; i >= 0; i--) {
				delete[] maze[i];
			}
			delete[] maze;
		}
		String^ c1 = textBox1->Text;
		String^ c2 = textBox2->Text;
		if (c1 != "" && c2 != "" && CheckText(c1) && CheckText(c2)) {
			m = Convert::ToInt32(textBox1->Text);
			p = Convert::ToInt32(textBox2->Text);
			dataGridView2->RowCount = m + 2;
			dataGridView2->ColumnCount = p + 2;
			maze = new int* [m + 2];
			for (int i = 0; i < m + 2; i++) {
				maze[i] = new int[p + 2];
				for (int j = 0; j < p + 2; j++) {
					if (i == 0 || i == m + 1 || j == 0 || j == p + 1)maze[i][j] = 2;
					else maze[i][j] = 1;
				}
			}
			randomMaze();
		}
		else {
			MessageBox::Show("請輸入數字m及p!");
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		StreamWriter^ output = gcnew StreamWriter(Directory::GetCurrentDirectory() + " - output.txt");
		// 必須給系統知道寫檔的檔名與存放路徑
		String^ forOutput = "";
		forOutput += m + " " + p;
		output->WriteLine(forOutput);
		for (int i = 1; i < dataGridView2->RowCount - 1; i++)
		{
			forOutput = "";
			for (int j = 1; j < dataGridView2->ColumnCount - 1; j++)
			{
				if (Convert::ToString(dataGridView2->Rows[i]->Cells[j]->Value) == "@") {
					forOutput += 0 + " ";
				}
				else forOutput += dataGridView2->Rows[i]->Cells[j]->Value + " ";
				
			}
			output->WriteLine(forOutput); // 一次寫出一列，寫完後即換行
		}
		output->Close(); // 寫完檔後務必關檔
	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (checkBox1->Checked) {
			switch (e->KeyCode) {
			default:
				break;
			case Keys::D:
				if (x != m || y != p + 1) {
					y++;
					if (CheckWall()) {
						dataGridView2->Rows[x]->Cells[y - 1]->Value = 0;
						dataGridView2->Rows[x]->Cells[y]->Value = "@";
					}
					else y--;
				}
				else {
					MessageBox::Show("恭喜過關!");
					dataGridView2->Rows[x]->Cells[y]->Value = 0;
					x = 1; y = 0;
					dataGridView2->Rows[x]->Cells[y]->Value = "@";
					if (checkBox2->Checked) {
						for (int i = m + 1; i >= 0; i--) {
							delete[] maze[i];
						}
						delete[] maze;
						dataGridView2->RowCount = m + 2;
						dataGridView2->ColumnCount = p + 2;
						maze = new int* [m + 2];
						for (int i = 0; i < m + 2; i++) {
							maze[i] = new int[p + 2];
							for (int j = 0; j < p + 2; j++) {
								if (i == 0 || i == m + 1 || j == 0 || j == p + 1)maze[i][j] = 2;
								else maze[i][j] = 1;
							}
						}
						randomMaze();
					}
				}
				break;
			case Keys::A:
				if (x != 1 || y != 0) {
					y--;
					if (CheckWall()) {
						dataGridView2->Rows[x]->Cells[y + 1]->Value = 0;
						dataGridView2->Rows[x]->Cells[y]->Value = "@";
					}
					else y++;
				}
				else MessageBox::Show("沒有回頭路了喔!");
				break;
			case Keys::W:
				x--;
				if (CheckWall()) {
					dataGridView2->Rows[x + 1]->Cells[y]->Value = 0;
					dataGridView2->Rows[x]->Cells[y]->Value = "@";
				}
				else x++;
				break;
			case Keys::S:
				x++;
				if (CheckWall()) {
					dataGridView2->Rows[x - 1]->Cells[y]->Value = 0;
					dataGridView2->Rows[x]->Cells[y]->Value = "@";
				}
				else x--;
				break;
			}
		}
	}
	
};
}
