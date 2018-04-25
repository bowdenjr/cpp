#include <iostream>

using namespace std;


struct personalData // DATA STRUCTURE
{
	string name;
	string surname;
	string telNumber;
	short age;
}a,b;
void test(personalData *); //test function takes a pointer as an input

int main()
{

	personalData person[5];
	a.age = 50;
//	cout << a.age << endl;
	person[0].name = "Jonathan";
	person[1].name = "Arkadiuaz";
	person[0].surname = "Bowden";
	person[0].telNumber = "1234";
	person[0].age = 34;
//
//	cout << person[0].name << endl;
//	cout << person[0].surname << endl;
//	cout << person[0].telNumber << endl;
//	cout << person[0].age << endl;

// THE NAME OF THE ARRAY IS A POINTER
//
//	cout << (*(person+1)).name << endl;
//	cout << (*&person[0]).name << endl;
//	cout << (person+1)->name << endl; // NOTE NEW OPERATOR FOR VALUE FROM OPERATOR

	// In this example p2 -> p1 -> &a

	personalData *p = &person[0]; // p is a pointer that points to the address

	personalData *p2 = person; // p2 is a pointer that points to the array name (WHICH IS A POINTER). A pointer that points to a pointer.

//	cout << p->name << endl;

	test(p);
	cout << p->name << endl;

	cout << endl;
	return 0;
}
void test (personalData *person_) // NB this only receiving an address, this is faster to write and run instead of sending all the variables.
{
	person_->name = "Agnes";
}
