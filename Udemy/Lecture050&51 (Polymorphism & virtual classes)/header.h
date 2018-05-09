#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>

using namespace std;

class Animal
{
    protected:
        string voice;
    public:
        Animal();
        virtual ~Animal(); //Always create a virtual destructor, because when objects are deleted, the memory is made free.
        virtual string getVoice() = 0; //virtual means check if there isn't an "overloaded" function in the inherited classes. Compiler knows which morph should be invoked.

        //With virtual xyzfunction = 0, it creates an abstract class.
};

class Dog : public Animal
{
    string sign;
public:
    Dog();
    ~Dog();
    string getVoice() {return voice + " " + sign;}
};

class Cat : public Animal
{
    string sign;
public:
    Cat();
    ~Cat();
    string getVoice() {return voice  + " " + sign;}
};

class Cow : public Animal
{
    string sign;
public:
    Cow();
    ~Cow();
    string getVoice() {return voice  + " " +  sign;}
};












#endif // HEADER_H_INCLUDED
