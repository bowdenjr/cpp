#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{


	/*
	while (--i) // putting the increment before the variable, checks the "next" condition before executing loop
	{
		cout << i << endl;
	}
	*/

	const int sizeofarray = 34;

	int i = 0;	

	int arr[sizeofarray];
	/*
	while(i < sizeofarray)
	{
		arr[i] = 10 * i;
		cout << arr[i++] << endl; // First send to the ouput, then increment
	}
	*/

	do
	{
		cout << "lala";
	} while (i); //check condition at end

	getchar();
	return 0;
}

