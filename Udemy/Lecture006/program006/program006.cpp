// program006.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	/*
	int a = 10;
	float b = 4;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl; //If use an Int, this wouldn't be a problem. Doesn't matter which is double/float

	// Modulo operator = %
	cout << "Modular arithmetic:" << endl;
	cout << 10 % 4 << endl;

	*/

	// Increment by one
	int c = 1;

	// c = c + 1;
	/* 
	c += 1;
	c /= 2;
	c *= 1;

	cout << c << endl;
	*/

	cout << "INCREMENTATIAON EXAMPLES" << endl;
	int d = 1;
	cout << d++ << endl; // returns one because it outputs d first, then increments (POST-INCREMENTATION)
	cout << ++d << endl; // increments first (PRE-INCREMENTATION)


	cout << "DECREMENTATIAON EXAMPLES" << endl;
	int e = 1;
	cout << e-- << endl; // returns one because it outputs d first, then decrements (POST-DECREMENTATION)
	cout << --e << endl; // decrements first (PRE-DECREMENTATION)


	getchar();

	return 0;
}

