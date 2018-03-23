// Lecture20 (exercise, nested loops).cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int nr = 1234; // tell us it has 4 digits
	int nrOfDigits = 1;
	
	/*
	cout << 1234 / 10 << endl; // including a decimal point in the divisor, gives us more accuaracy
	cout << 123 / 10 << endl;
	cout << 12 / 10 << endl;
	cout << 1 / 10 << endl;
	

	int tmp = nr;
	while (tmp /= 10) // executes while false, anything non-zero is true, so here this means tmp = tmp / 10, when this is evaluated, if it is zero the loop will stop.
	{
		nrOfDigits++;
	}

	cout << "the number " << nr << " has " << nrOfDigits << " digits " << endl;
	*/



	/*
		1 2 3 4 5 6 7 8 9 10
		2 4 6 8 10 12 ......
		3 6 9... 
		4... 
		5...
	
	*/


	for (int i = 1; i <= 15; i++)
	{
		for (int j = 1; j <= 12; j++)
		{
			cout.width(4); // want width to fall between all things going to output
			cout << i * j << " ";
		}
		cout << endl;
	}


	getchar();
	return 0;
}
