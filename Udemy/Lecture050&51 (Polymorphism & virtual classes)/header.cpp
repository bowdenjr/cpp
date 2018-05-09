#include "header.h"
#include <iostream>

using namespace std;

Animal::Animal()
{
    voice = "default value";
}

Animal::~Animal()
{
    cout << "I am from the base class" << endl;
}

Dog::Dog()
{
    sign = "D";
    voice = "woof";
}

Dog::~Dog()
{
    cout << "I am from the sub-class" << endl;

}

Cat::Cat()
{
    sign = "Ca";
    voice = "meow";
}

Cat::~Cat()
{
    cout << "I am from the sub-class" << endl;
}

Cow::Cow()
{
    sign = "Co";
    voice = "moooo";
}

Cow::~Cow()
{
    cout << "I am from the sub-class" << endl;
}
