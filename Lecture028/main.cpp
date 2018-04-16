#include <iostream>

using namespace std;
// REFERENCE VARIABLES


int main()
{
    string name = "Agnes";

    cout << "Value of Variable: " << name << ", address of Variable is " << &name << endl;

    string &nr_6 = name; // Another name for name variable

    cout << "Value of Variable: " << nr_6 << ", address of Variable is " << &nr_6 << endl;

    nr_6 = "Scott";

    cout << "Value of Variable: " << name << ", address of Variable is " << &name << endl;

    nr_6 = name; // Another name for name variable

    cout << "Value of Variable: " << nr_6 << ", address of Variable is " << &nr_6 << endl;

    /*

        Ref variables must be initialised when created. (i.e. line 13).
        string &nr_6 means creating a reference variable.

        Ref var can't change associations/connections, it can't be changed later.
        &nr_6 = name_2; WON'T WORK
        A ref var is effectively a const
        But using a const will make it unchangeable

        They must also be the same type

    */



	cout << endl;
	return 0;
}
