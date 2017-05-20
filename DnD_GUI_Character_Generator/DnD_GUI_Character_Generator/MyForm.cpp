//#include <string>
#include <time.h>
#include "Character.h"
#include "MyForm.h"
	
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DnD_GUI_Character_Generator::MyForm form;
	Application::Run(%form);
}