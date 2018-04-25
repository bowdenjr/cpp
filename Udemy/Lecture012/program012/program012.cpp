#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	// CONDITIONAL OPERATORS - basically just a compact if block

	int a = 30;
	int b = 200;

	// CONDITION ? instruction to be executed on TRUE : on FALSE
	
	string message  = (a > b) ? "a > b" : "a <= b";

	cout << ((a > b ? a : b)) + 10 << endl; // add 10 to the higher number

	getchar();
	return 0;
}
