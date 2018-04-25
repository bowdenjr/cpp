#include "our_first_class.h"
#include <iostream>


using namespace std;

void personalData::setAge(int age)//:: is the scope operator (goes inside the class)
{
    if(age < 0)
    {
        this->age = 0; //"this" keyword refers to the class
    } else {
        this->age = age; //so "this"class.age = age from function here
			}
}

// Making custom functions to set private variables. This is best practice because we don't want "hackers" to access these. If also allows us to validate entry to the class's variables.

personalData::personalData()
{
    static int i = 0; // static variables are only created once, and is shared amongst instances of classes.
    cout << "Constructor has been invoked - " << ++i << endl;
    age=10;

    p = new int[5];
}
personalData::personalData(short age) //OVERLOADED CONSTRUCTOR
{
    static int k=0;
    cout << "Overloaded constructor invoked - " << ++k << endl;
    this->age = age;
    p = new int[5];
}

personalData::~personalData()
{
    static int j = 0;
    cout << "Destructor has been invoked - " << ++j << endl;
    delete [] p; // Free memory in the destructor, it is the developers duty to do this.
}
