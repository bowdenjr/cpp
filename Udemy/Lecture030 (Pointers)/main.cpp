#include <iostream>

using namespace std;

/* POINTERS */

int main()
{
/*
	int var = 5;
	cout << &var << endl;
	int *p = &var;	//This variable can "point" - ie store an address of a variable (in this case, if it's an integer).
	cout << p << endl;

*/
	// What if we wanted to get the value? - use *
/*
	int var = 5;
	cout << *&var << endl;
	int *p = &var;  // The asterisk here is used to INFORM about that this variable is a POINTER. It points to the address of another variable.
	cout << *p << endl; // This asterisk is used to GET the value from the pointed area in our memory (address).
*/

//CHANGING VALUES AND CONST POINTERS

//	int a = 20;
//
//	int var = 5;
//	cout << *&var << endl;
//	int * const p = &var;  // Can also define a constant pointer, prevents attempts to re-point the variable, but can still change value.
//	cout << *p << endl;
//	//p = &a;
//	*p = 60; //Change the value using the pointer.
//	cout << "var: " << var << endl;
//	cout << "*p: " << *p << endl;
//	cout << "a: " << a << endl;

/*
	int a = 20;
	int var = 5;
	cout << *&var << endl;

	int *p = &var;
	cout << *p << endl;

	*p = 60;
	cout << "var: " << var << endl;
	cout << "*p: " << *p << endl;
	cout << "a: " << a << endl;

	int * const p_const = &a; // this is a pointer that has to be initialised when defined, because it cannot change after defining the thing it is pointing to.

	const int * p_2 = &a; //can't change value that is under the address it is pointing to/

	const int * const p_3  = &a; // can't change value or address

	*/


	int ordinary_var = 10;
	int *ordinary_p = &ordinary_var;

	cout << "ordinary_var: " << ordinary_var << endl; //value
	cout << "&ordinary_var: " << &ordinary_var << endl; //address
	cout << "ordinary_p: " << ordinary_p << endl; //address
	cout << "*ordinary_p: " << *ordinary_p << endl; // value from pointer
	cout << "&ordinary_p: " << &ordinary_p << endl; //pointer address

	int ** p_pointing_to_address_of_pointer = &ordinary_p;
	cout << "p_pointing_to_address_of_pointer: " << p_pointing_to_address_of_pointer << endl; //pointer address

	return 0;
}
