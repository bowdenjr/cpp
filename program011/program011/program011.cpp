#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	
	// SWITCH BETWEEN CASES

	// Can only use char and ints for switch

	/*
	int x = 0;
	
	switch (x) //executes all code after condition is met
	{
	case 0:
		cout << "code here when case is 0" << endl;
		break;
	case 25:
		cout << "code here when case is 25" << endl;
		break;
	case 50:
		cout << "code here when case is 50" << endl;
		break; // stops the rest of the swtich code being executed
	default:  
		cout << "code here when value is nothing else" << endl;
	}

	*/

	char x = 'd';

	switch (x) //executes all code after condition is met
	{
	case 'd':
		cout << "code here when case is 0" << endl;
		break;
	case 25:
		cout << "code here when case is 25" << endl;
		break;
	case 50:
		cout << "code here when case is 50" << endl;
		break; // stops the rest of the swtich code being executed
	default:
		cout << "code here when value is nothing else" << endl;
	}



	getchar();
	return 0;
}
