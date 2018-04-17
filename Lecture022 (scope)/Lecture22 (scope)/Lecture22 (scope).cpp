#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

//Global variables 
int globalVariable;


int main()
{
	/*
	int localVar;

	cout << "value of globalVariable " << globalVariable << endl;
	cout << "value of localVariable" << localVar << endl;

	int a = 10;

	if (a == 10)
	{
	int result = a * 10; // local variables are only available in a{curly brackets}
	cout << result << endl;
	}

	// cout << result << endl; // this won't work

	*/


	int nr=0, result=0; // make sure to assign zero to the variable declaration
	int i = 0;

	for(; i < 3; i++) // i is only used inside the {}
	{
		cout << "Enter " << (i + 1) << " number" << endl;
		cin >> nr;
		result += nr;
	}

	cout << result << endl;
	cout << "we added " << i << " numbers" << endl;
	
	system("pause");
	return 0;
}
