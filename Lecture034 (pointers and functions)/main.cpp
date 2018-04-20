#include <iostream>

using namespace std;

void multiplyBy(int &, int); //Reference?



int main()
{


	int a = 10;

	multiplyBy(a,5);

	cout << a << endl;





	cout << endl;
	return 0;
}

void multiplyBy(int & var, int amount)
{
	var *= amount;

}
