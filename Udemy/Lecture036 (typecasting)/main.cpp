#include <iostream>

using namespace std;



int main()
{


	double var = 5.6;
	cout << (int)var << endl; // This is how you typecast, it truncated decimal

/*

	int a = 5;
	int b = 7;
	cout << (double)a / b << endl;



	int x = 10243523432;
	short y = x;
	cout << y << endl; //Loses precision

*/
	cout << int(var) << endl;  //explicit, from C
	cout << static_cast<int>(var) << endl; 	// for C++


	char ch;
	cin >> ch;
	cout << (int)ch << endl;
	cout << endl;
	return 0;
}

