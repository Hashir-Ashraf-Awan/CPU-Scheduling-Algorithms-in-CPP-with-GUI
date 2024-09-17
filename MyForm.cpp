#include "MyForm.h"
using namespace std;
using namespace System;
#include<iostream>
using namespace::Windows::Forms;
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project8::MyForm form;
	Application::Run(% form);
	cout << "Hello";
}