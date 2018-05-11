#include "header01.h"
#include <iostream>

using namespace std;

int* createArray(int sizeOfArray)
{

	cout << "How many numbers would you like to store in an array?" << endl;
	cin >> sizeOfArray;

	int * p = new (nothrow) int[sizeOfArray];

	if(p!=NULL)
	{
		for(int i = 0; i < sizeOfArray; i++) //Enter the array
		{
			cout << "Enter the " << (i+1) << " number." << endl;
			cin >> p[i];
		}

//		for(int i = 0; i < sizeOfArray; i++) //Print the array
//		{
//			cout << "p [ " << i << " ] = " << p[i] << endl;
//		}

	}
	else
		cout << "Insufficient memory " << endl;

}
