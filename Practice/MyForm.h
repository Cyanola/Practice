#pragma once
#include "Functions.h"
namespace Practice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			Application::Exit();
		}
	private: System::Windows::Forms::Panel^ panel1;


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(64, 25);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(451, 429);
			this->panel1->TabIndex = 1;
			this->panel1->Click += gcnew System::EventHandler(this, &MyForm::panel1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 489);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Click(System::Object^ sender, System::EventArgs^ e)
	{
	//	Setup();
	//	while (!gameOver)
	//	{
	//		system("cls"); //system("clear");
	//		for (int i = 0; i < width + 2; i++)
	//			panel1->Text += "#";
	//		panel1->Text += '\n';
			//		for (int i = 0; i < height; i++)
	//		{
	//			for (int j = 0; j < width; j++)
	//			{
	//				if (j == 0)
	//					panel1->Text += "#";
	//				if (i == y && j == x)
	//					panel1->Text += "O";
	//				else if (i == fruitY && j == fruitX)
	//					panel1->Text += "F";
	//				else
	//				{
	//					bool print = false;
	//					for (int k = 0; k < nTail; k++)
	//					{
	//						if (tailX[k] == j && tailY[k] == i)
	//						{
	//							panel1->Text += "o";
	//							print = true;
	//						}
	//					}
	//					if (!print)
	//						panel1->Text += " ";
	//				}
	//				if (j == width - 1)
	//					panel1->Text += "#";
	//			}
	//			panel1->Text += '\n';
	//		}
	//		for (int i = 0; i < width + 2; i++)
	//			panel1->Text += "#";
	//		panel1->Text += '\n';
	//		panel1->Text += "Score:";
	//		panel1->Text += score;
	//		panel1->Text += "\n";
	//		if (_kbhit())
	//		{
	//			switch (_getch())
	//			{
	//			case 'a':
	//				dir = LEFT;
	//				break;
	//			case 'd':
	//				dir = RIGHT;
	//				break;
	//			case 'w':
	//				dir = UP;
	//				break;
	//			case 's':
	//				dir = DOWN;
	//				break;
	//			case 'x':
	//				gameOver = true;
	//				break;
	//			}
	//		}
	//		int prevX = tailX[0];
	//		int prevY = tailY[0];
	//		int prev2X, prev2Y;
	//		tailX[0] = x;
	//		tailY[0] = y;
	//		for (int i = 1; i < nTail; i++)
	//		{
	//			prev2X = tailX[i];
	//			prev2Y = tailY[i];
	//			tailX[i] = prevX;
	//			tailY[i] = prevY;
	//			prevX = prev2X;
	//			prevY = prev2Y;
	//		}
	//		switch (dir)
	//		{
	//		case LEFT:
	//			x--;
	//			break;
	//		case RIGHT:
	//			x++;
	//			break;
	//		case UP:
	//			y--;
	//			break;
	//		case DOWN:
	//			y++;
	//			break;
	//		default:
	//			break;
	//		}
	//		//if (x > width || x < 0 || y > height || y < 0)
	//		//	gameOver = true;
	//		if (x >= width) x = 0; else if (x < 0) x = width - 1;
	//		if (y >= height) y = 0; else if (y < 0) y = height - 1;
	//		for (int i = 0; i < nTail; i++)
	//			if (tailX[i] == x && tailY[i] == y)
	//				gameOver = true;
		//	if (x == fruitX && y == fruitY)
		//	{
		//		score += 10;
		//		fruitX = rand() % width;
		//		fruitY = rand() % height;
		//		nTail++;
		//	}
		//	Sleep(50); //sleep(10);
		//}
Setup();
while (!gameOver)
{
	Draw();
	Input();
	Logic();
	Sleep(75); //sleep(10);
}
	}
	
		
	};
}
