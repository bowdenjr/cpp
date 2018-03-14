// program008.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	/*
	AND CONJUCTION  &&
		(7>5)  && (5!=10)
	*/

	cout << ((7 < 5) && (5 != 10)) << endl;
	
	
	/*
	OR DISJUCTION  ||
	*/

	cout << ((7 < 5) || (5 != 10)) << endl;


	// NOT ! (exclamation mark)


	getchar();
	return 0;
}
