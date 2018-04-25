// program003.cpp : Defines the entry point for the console application.
// 

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double A = 4;
	cout << A << endl;
	cout << &A << endl; //ampersand gives you the address of the variable. int is 4 bytes of memory

	double A5; //Variables can be text-number but not number-text

	A = 10;
	cout << A << endl;
	cout << &A << endl;
	cout << "Press any key to continue...";
	getchar(); // Use getchar() in console applications as a "Press any key to continue..."

	return 0;
}

