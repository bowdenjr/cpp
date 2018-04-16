#include <iostream>

using namespace std;

int & swap(int &, int &);

int main()
{
	int a = 10;
	int b = 20;

	int &c = swap(a,b);

	c = 100;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;


	cout << endl;
	return 0;
}

int & swap(int &a_, int &b_) //Returns the reference
{
	int t;
	t = a_;
	a_ = b_;
	b_ = t;

	return a_;
}
