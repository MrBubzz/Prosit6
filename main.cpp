#include "pch.h"
#include "Form1.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	P6new::MyForm monFormulaire;
	Application::Run(% monFormulaire);
}