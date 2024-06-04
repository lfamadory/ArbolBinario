#include "Form1.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace ArbolBinario_D;


[STAThreadAttribute]
void Main(array<String^> ^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Form1());
}