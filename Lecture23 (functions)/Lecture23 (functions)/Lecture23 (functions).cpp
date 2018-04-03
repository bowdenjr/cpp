#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

void welcome(); // declaration of function, body is below parameters would go in ()
bool isNumber(string); //parameters don't need the name, just the type
void enterName();
double add(double a, double b){ return a + b; }
void changeValueTo10(int x) // only works on the copy of x, which is destroyed
{
	x = 10;
}


int main()
{
	//welcome();
	//enterName();
	//enterName();
	//enterName();
	//cout << add(4, 5);
	int a = 5;
	changeValueTo10(a);
	cout << a;


	cout << endl;
	system("pause");
	return 0;
}

void welcome()
{
	cout << "Hello and welcome to my program" << endl;
}

bool isNumber(string tmp)
{
	if (tmp[0] == '0')
		return false;
	for (int i = 0; i < tmp.length() && isNumber; i++)
	{
		if (!(tmp[i] > 48 && tmp[i] <= 57)) // see ASCII tables, these are digits
		{
			return false;
			break; // Speeds it up
		}
	}
	return true;
}
void enterName()
{
	string tmp;

	cout << "Enter the number " << endl;
	cin >> tmp;

	if (isNumber(tmp))
		cout << "Number entered properly " << endl;
	else
		cout << "Number wasn't entered properly" << endl;


}