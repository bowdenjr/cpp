#include <iostream>
#include "our_first_class.h"

using namespace std;

// CLASSES = extended structures
void test()
{
	personalData *pointer = new personalData[5]; //The new operator is reserving memory
	delete [] pointer; //REMEMBER TO DESTROY VARIABLES IN YOUR CLASSES
}
int main()
{
	personalData person1(20);
	personalData person2(50);

	cout << person1.getAge() << endl;
	cout << person2.getAge() << endl;

	cout << endl;

	//test();

	return 0;
}

