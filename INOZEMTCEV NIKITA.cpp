// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	 //first prog
	string name;;
	cout << "What is your name?(write your name in English language)"<<endl;
	cin >> name;
	cout << "Well met, " << name << endl;

	//second prog
	float a=0, b = 0;
	cout << "Enter two values" << endl;
	cin >> a >> b;
	cout << "Sum: " << a + b << endl << "composition: " << a * b << endl << "diff: " << a - b << endl;
	if (b != 0) cout << "quot: " << a / b << endl;
	system("pause");
	return 0;
}

