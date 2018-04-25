#include <iostream>

using namespace std;



int main()
{


	/*
	Exercise 1.

	Declare a variable "a" and initialize it with any value. Then create a pointer variable "p"
	containing the address of the variable "a". Print out in the console the value and address
	of the variable "a" using both variable "a" and pointer "p".
	*/
	/*
	{
		int a = 10; // Variable
		int * p = &a; //Pointer

		cout << "The value of a is " << a << endl; //VALUE
		cout << "The value stored at the pointer p is " << *p << endl; //VALUE
		cout << "The address of a is " << &a << endl; //ADDRESS
		cout << "The address that the pointer p points to is " << p << endl; //ADDRESS
	}
	*/
/*
Exercise 2.

Edit the code from the first exercise. Create another pointer "pp" containing the address
of the pointer variable "p". Print out in the console the value and address of the variable
"a" using variable "a" and pointers "p" and "pp". Furthermore, print out the value and address
of the pointer "P" using pointers "p" and "pp".

*/

	{
		int a = 10; // Variable
		int * p = &a; //Pointer
		int ** pp = &p; //Pointer to pointer

		cout << "The value of a is " << a << endl; //VALUE
		cout << "The value stored at the pointer p is " << *p << endl; //VALUE

		cout << "The address of a is " << &a << endl; //ADDRESS
		cout << "The address that the pointer p points to is " << p << endl; //ADDRESS


		cout << "The value stored at the pointer pp is  " << *pp << endl; //ADDRESS
		cout << "The address that the pointer pp points to is " << pp << endl; //ADDRESS

		cout << endl;

		cout << "The address of pointer p is " << &p << endl;
		cout << "The value of pointer p is " << *p << endl;
    cout << "To get the value of the pointer p using pointer pp one has to point to the address in the pointer pp, *pp = " << *pp << endl;
    cout << "To get the value of the variable a using pointer pp one has to point to the address in the pointer pp and p, **pp = " << **pp << endl;
	}

	cout << endl;
	return 0;
}

