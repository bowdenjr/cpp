// Lecture17.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

// 2 dimensional arrays

int main()
{

	int biarr[3][4] = { 0 };
	int triarr[2][3][2];
	
	cout << &biarr[0] << endl;
	cout << &biarr[0][0] << endl;
	cout << &biarr[0][1] << endl;
	cout << &biarr[0][2] << endl;
	cout << &biarr[0][3] << endl;
	cout << &biarr[1] << endl;
	cout << &biarr[1][0] << endl;
	cout << &biarr[1][1] << endl;

	getchar();
	return 0;
}
