// Lecture15.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	double var1, var2;

	beginning:
	system("cls"); // Clear screen

	cout << "Enter first number " << endl;
	cin >> var1;

	cout << "Enter second number " << endl;
	cin >> var2;

	cout << "What do you want to do with those numbers?" << endl;

	cout << "+ add" << endl;
	cout << " - subtract" << endl;
	cout << "* multiply" << endl;
	cout << "/ divide" << endl;

	char decision;
	cin >> decision;


	switch (decision)
	{
		case '+':
			cout << var1 << " + " << var2 << " = " << (var1 + var2) << endl;
			break;
		case '-':
			cout << var1 << " - " << var2 << " = " << (var1 - var2) << endl;
			break;
		case '*':
			cout << var1 << " * " << var2 << " = " << (var1 * var2) << endl;
			break;
		case '/':
			if (var2) // equivalent to var2 != 0, because everything 
				cout << var1 << " / " << var2 << " = " << (var1 / var2) << endl;
			else
				cout << "You cannot divide by zero" << endl;
			break;
		default:
			cout << "You typed an incompatible operation" << endl;
	}

	cout << "Do you want to continue the program (Y/N)?" << endl;

	char decision2;
	cin >> decision2;

	if (decision2 == 'Y' || decision2 == 'y')
		goto beginning; // Don't use this!

	getchar();
	return 0;
}
