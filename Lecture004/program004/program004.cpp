// program004.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;


int main()
{
	// TYPE_OF_VARIABLE nameOfVariable;
	// TYPE_OF_VARIABLE nameOfVariable1, nameOfVariable2, nameOfVariable3;

	int a = 40, b = 0, c = 20; //ints run from -2bn to 2bn, 4 bytes

	cout << "a: " << a << " Address: " << &a << endl;
	cout << "b: " << b << " Address: " << &b << endl;
	cout << "c: " << c << " Address: " << &c << endl;

	short t1 = 5.56; // -32768 to 32767, 2 bytes
	cout << t1 << endl;

	float t2 = 5.12; // 4 bytes , runs from 38 zeros
	double  t3 = 5.12; // 8 bytes, up to 308 zeros, greater precision (more digits after the zero)
	cout << t2 << endl;
	cout << t3 << endl;

	char t4; //character variables
	t4 = 'a';
	cout << t4 << endl;

	string t5 = "Hello World!";
	cout << t5 << endl;

	string x = "part1";
	string y = "part2";

	string combinedStrings = x + " " + y; // just use plus to combine string
	cout << combinedStrings << endl;

	
	bool t6 = 323; // ZERO IS ALWAYS FALSE, EVERY OTHER NUMBER IS TRUE
	cout << t6 << endl;

	//unsigned short 0 to 65535
	unsigned short t7 = 65000;
	cout << t7 << endl;

	const string NAME = "Jonathan Bowden";	 // unchangeable, uppercase for constants
	cout << NAME << endl;

	getchar();

	return 0;
}

