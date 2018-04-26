#include <iostream>
#include "header.h"

using namespace std;

//CONVERT CONSTURCTORS

int main()
{

//	int a = 10;
//	double b = 20;
//
//	cout << a / b << endl;

//	string text1 = "lala "; // There is also a \0
//	string text2 = text1 + "string2";
//
//	cout << text2 << endl;

	Integer a(50);

	int b = a;
	a = 100;

//	cout << a.getnr() << endl;
//	cout << b << endl;

	a += b;

	cout << a.getnr() << endl;

	cout << endl;
	return 0;
}

