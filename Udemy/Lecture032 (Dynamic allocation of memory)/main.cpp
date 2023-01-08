#include <iostream>

using namespace std;



int main()
{
	int var = 41240;
	int amount;

	cout << "How many numbers would you like to store in an array?" << endl;
	cin >> amount;

	int * p = new (nothrow) int[amount];

	if(p!=NULL)
	{
		for(int i = 0; i < amount; i++)
		{
			cout << "Enter the " << (i+1) << " number." << endl;
			cin >> p[i];
		}

		for(int i = 0; i < amount; i++)
		{
			cout << "p [ " << i << " ] = " << p[i] << endl;
		}

	}
	else
		cout << "Insufficient memory " << endl;


	 cout << *(new int) << endl; // ALLOCATES MEMORY DYNAMICALLY

/*
	{ // IN CURLY BRACES SO MAKES IT LOCAL
		int *p = new int; // Storing the address of my new variable in a pointer
		*p = 50;
		cout << p << endl;

		delete p; // Release the memory for the address of p
		p = NULL;

		p = &var;

		if (p != NULL)
		{
			*p = 60;
			cout << *p << endl;
		}

		cout << "var: " << var << endl;

	}
*/

//	int *p = new int;
//	cout << p << endl;

	delete p; // If you always remember to delete the pointer, the new assigning will use the same address. If you forget, it won't.

//	p = new int;
//
//	cout << p << endl;



/*
	DON'T DO THIS

	int arr[amount]; // RESERVES MEMORY OUTSIDE OF PROGRAM. THIS DOESN'T ENSURE THAT THE MEMORY IS FREE.

	arr[0] = 500;
	cout << arr[0] << endl;

*/

	cout << endl;
	return 0;
}

