#include <iostream>

using namespace std;



int main()
{

	// THE NAME OF AN ARRAY IS A POINTER!

	int a[3];
	a[0] = 0;
	a[1] = 20;
	a[2] = 40;
	short int zm;
	int * const p = &a[0];


	cout << p << endl;
	cout << a << endl; // This is a pointer

	cout << endl << endl << endl << endl;

	cout << &a[0] << endl;
	cout << &a[1] << endl;
	cout << &a[2] << endl;

	cout << endl << endl << endl << endl;

	// Can use pointers as "numbers"...
	cout << a << endl;
	cout << a + 1 << endl; // ie jump by 4 bytes when it's an integer
	cout << a + 2 << endl;

	cout << endl << endl << endl << endl;

	// ALSO FOR VALUES

	cout << *a << endl;
	cout << *(a + 1) << endl;
	cout << *(a + 2) << endl;

	cout << endl << endl << endl << endl;

	//EQUIVALENLTY
	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;

	cout << endl << endl << endl << endl;


	int * p2 = &a[0];

	// CAN USE INCREMENTATION, ALL THESE DO DIFFERENT THINGS
	cout << *p2 << endl;
	cout << ++*p2 << endl; //INCREMENT THE VALUE UNDER p2, ie a[0] becomes 1
	cout << *++p2 << endl; //INCREMENT THE ADDRESS AND RETURN THE VALUE, ie returns value of a[1], ie 20
	cout << *p2++ << endl; //RETURN VALUE FROM CURRENT POINTED ADDRESS, THEN INCREMENT. ie returns value of a[1] = 20m then increment the address of p2, ie address of a[2]
	cout << *p2 << endl; // RETURN CURRENT POINTED VALUE, ie a[2] = 40

	// BE CAREFUL WITH POINTERS AS YOU CAN CHANGE THE MEMORY OF SOME OTHER PROGRAM THAT IS RUNNING.

	cout << endl;
	return 0;
}

