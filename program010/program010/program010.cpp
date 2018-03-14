#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{

	int a =10, b = 10;
	/*
	cout << "Enter a: " << endl;
	cin >> a;

	cout << "Enter b: " << endl;
	cin >> b;
	 

	 */


	if (a > b) {
		cout << a << " > " << b << endl;
	}
	else if (a < b)
		cout << a << " < " << b << endl;
	else
		cout << "conditions not met" << endl;

	/*
	

	if (7 > 4)
	{
		cout << "something" << endl;
		cout << "test" << endl;
	}

	if (98374)
		cout << "cond above is surely not equal to 0" << endl;



	if ((7 < 4 || 0 < 10) && (10 == 9))
		cout << "7 < 4 || 0 < 10" << endl; 

		*/

	getchar();

	return 0;
}
