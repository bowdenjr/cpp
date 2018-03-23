#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

// ARRAYS

int main()
{
	// An array is a series of memory blocks:
	
	int arr[4];

	//Index values are used to refer to array items

	arr[0] = 10;
	arr[1] = 50;
	arr[2] = 256;
	arr[3] = 928734;
	
	cout << "array[0]: " << arr[0] << ", address: " << &arr[0] << endl;
	cout << "array[1]: " << arr[1] << ", address: " << &arr[1] << endl;
	cout << "array[2]: " << arr[2] << ", address: " << &arr[2] << endl;
	cout << "array[3]: " << arr[3] << ", address: " << &arr[3] << endl;

	// the first array item represents the address of the entire array as well:
	cout << "Array address: " << &arr << endl;

	const int a = 100;

	int x[a]; // can feed from a variable, but it has to be a constant if not using dynamic operators


	getchar();
	return 0;
}
