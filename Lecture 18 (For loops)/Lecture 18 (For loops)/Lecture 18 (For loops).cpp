// Lecture 18 (For loops).cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <string>
#include <iostream>

// FOR LOOPS

using namespace std;

int main()
{

	/*
	for (init; condition; inc/dec)
		~loop code~
	*/

	/*
	for (int i = 0; i < 5; i++)
	{
		cout << "HELLO" << endl;
	}

	*/


	int arr[100];

	for (int i = 0; i < 100; i++)
	{
		arr[i] = i;
		cout << arr[i] << endl;
	}

 
	getchar();
	return 0;
}
