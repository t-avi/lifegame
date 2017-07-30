#include "MainForm.h"

using namespace Kursach;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainForm());
	return 0;
}
/*
Проект-Свойства проекта-компановщик-система-подсистема-Windows (/SUBSYSTEM:WINDOWS)
*/