#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

enum dayOfWeek {M = 1, Tu, W, Th, F, Sa, Su}; //This is a "custom type", not a variable
string getDay(dayOfWeek);

int main()
{

	int i;
	//dayOfWeek d = Sa;

	//cout << d << endl;
	//cout << dayOfWeek(Tu) << endl;

	cout << "Enter the day of a week " << endl;
	cout << "1. Monday " << endl;
	cout << "2. Tuesday " << endl;
	//...

	cin >> i;

	// cout << getDay(Sa) << endl;
	cout << getDay(dayOfWeek(i)) << endl;

	cout << endl;
	system("pause");
	return 0;
}

string getDay(dayOfWeek d_)
{
	switch (d_)
	{
		case M:
			return "Monday";
		case Tu:
			return "Tuesday";
		case W:
			return "Wednesday";
		case Th:
			return "Thursday";
		case F:
			return "Friday";
		case Sa:
			return "Saturday";
		case Su:
			return "Sunday";
		default:
			return "You made an invalid entry";
	}

}