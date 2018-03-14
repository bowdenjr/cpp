// program005.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;


int main()
{
	// console input
	
	/*
	int a;

	cin >> a;
	cout << endl;
	cout << "a = " << a << endl;
	*/
	
	string firstname, surname;

	cout << "Enter your first name: " << endl;
	cin >> firstname;

	cout << "Enter your surname" << endl;
	cin >> surname;

	cout << "Your name is: " << firstname + " " + surname << endl;





	getchar();

	return 0;
}

