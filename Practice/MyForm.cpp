#include "MyForm.h"
#include "Functions.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Practice::MyForm form;
	Application::Run(% form);
}
//System::Void Practice::MyForm::panel1_Click(System::Object^ sender, System::EventArgs^ e)
//{
//	Setup();
//	while (!gameOver)
//	{
//		Draw();
//		Input();
//		Logic();
//		Sleep(50); //sleep(10);
//	}
//}
