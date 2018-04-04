#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int power(int, int);
double power(double, int); //overloading the function, better to do this as it saves memory

int main()
{

	cout << power(2.5, 3) << endl; //C++ knows which function to use

	cout << endl;
	system("pause");
	return 0;
}

int power(int b, int e) //base and exponent
{
	int b_ = b; // storage of initial value of b

	while (e-- > 1)
		b_ *= b;

	return b_;
}

double power(double b, int e) //base and exponent
{
	int b_ = b; // storage of initial value of b

	while (e-- > 1)
		b_ *= b;

	return b_;
}