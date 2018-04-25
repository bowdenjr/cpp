// program009.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

// BITWISE OPERATORS Lecture 3 Lesson 11	

int main()
{

	/*
	Bitwise AND - &
	Bitwise OR - |
	Bitwise NOT - ~ (tilde)
	Bitwise XOR - ^ (caret)
	Bitwise left shift - << 
	Bitwise right shift - >>
	*/

	cout << (10 & 2) << endl;

	/*
	EXAMPLE OF (10 & 2)
		1 0 1 0
		0 0 1 0 
		-------
		0 0 1 0
	*/
	
	cout << (10 | 2) << endl;
	
	/*
	EXAMPLE OF (10 | 2)
	1 0 1 0
	0 0 1 0
	-------
	1 0 1 0
	*/

	cout << (10 ^ 2) << endl;

	/*
	EXAMPLE OF (10 ^ 2)
	1 0 1 0
	0 0 1 0
	-------
	1 0 0 0
	*/


	cout << (~10) << endl;

	/*
	EXAMPLE OF (~10), the first number in binary is always a sign indicator, so this gives us a negative number
	000000...000000000000 1 0 1 0
	~
	111111...111111111111 0 1 0 1
	*/


	cout << (10 << 1) << endl; // basically means mutilplying 10 by 2 ^ 1, will always be 2 ^ x because it's binary

	/*
	EXAMPLE OF (10 << 1)
	
	000000...000000000000 1 0 1 0
	<<
	000000...000000000001 0 1 0 0
	*/

	cout << (10 >> 1) << endl; // basically means 10 divided by 2 ^ 1, will always be 2 ^ x because it's binary

	/*
	EXAMPLE OF (10 >> 1)

	000000...000000000000 1 0 1 0
	>>
	000000...000000000000 0 1 0 1

	*/



	getchar();
	return 0;
}

