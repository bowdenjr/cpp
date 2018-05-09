#include <iostream>
#include "header.h"

using namespace std;

void voiceOfAnimal(Animal *); //receive a pointer/address
void voiceOfAnimal(Animal &); //can also overload with a reference

int main()
{

////	Animal animal01; // If abstract, can't create an instance of class
//	Dog dog01; //morph of parent class
//	Cat cat01; //morph of parent class
//	Cow cow01; //morph of parent class

//	cout << animal01.getVoice() << endl;
//	cout << dog01.getVoice() << endl;
//	cout << cat01.getVoice() << endl;
//	cout << cow01.getVoice() << endl;

//	voiceOfAnimal(&dog01);
//	voiceOfAnimal(cow01);

//	Animal *p = &dog01; //Animal pointer to dog01 object
//	Dog *p2 = &cat01; //Dog class pointer to cat address (not possible)
//	cout << p->getVoice() << endl; //Where is the sign? It is using the Animal parent class. Even though we're pointing to the address of the dog. The compiler doesn't know it's inherited. NEEDS TO BE key word "VIRTUAL" FUNCTION in the parent class

//Lecture 51 from here:


	Animal *dog02 = new Dog; //point to a generic animal

	delete dog02;

	return 0;
}
void voiceOfAnimal(Animal *p) //receive a pointer/address
{
	cout << p->getVoice() << endl;

}
void voiceOfAnimal(Animal &p) //receive a pointer/address
{
	cout << p.getVoice() << endl;

}
