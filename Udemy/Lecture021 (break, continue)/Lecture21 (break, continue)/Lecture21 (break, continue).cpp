// Lecture21 (break, continue).cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{

	/*
	for (int i = 1; i <= 10; i++) // i = 2
	{
		//if (i == 5)
		//	continue;  // everything after the continue won't be executed, but the loop won't be stopped.

		//if (i == 5)
		//	break;  // everything after break won't be executed and the loop is stopped.

		for (int j = 1; j <= 10; j++) // j = 1
		{
			if (j == 5)
				break; //exits the loop, continue just skips the 5th one
			cout.width(4);
			cout << i * j;
		}


		cout << endl;
	}

	*/

	for (int i = 1, j = 1; i <= 10; i++)
	{
		cout.width(4);
		cout << i * j;

		if (i == 10)
		{
			j++;
			i = 0;
			cout << endl;
		}

		if (j == 10 + 1) //add plus one to see the 10th row
			break;
	}




	getchar();
	return 0;
}
