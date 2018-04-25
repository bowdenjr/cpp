#include <iostream>
#include "user.h"

using namespace std;

int main()
{

	cout << User::getCounter() << endl;

	//By adding STATIC we are making the variable shareable between all instances and it is even created before the instance of the class.





	cout << endl;
	return 0;
}

