#include <iostream>
#include "header.h"

using namespace std;

class DivisionByZeroException
{
public:
	void getErrorMessage() {cout << "ERROR: Cannot divide by zero";}
};


double division(double a, double b) throw(DivisionByZeroException)
{
	if(b==0)
		throw DivisionByZeroException();
	return a / b;
}

int main()
{

	// May inadvertently try to divide by zero
	// May not have enough memory when creating a new object


	double result;

	try
	{
//		a *= 10;
//		if (a == 50) {throw a;}

		result = division(5,0);
		cout << "The result is " << result << endl;

		cout << "Here are other instructions" << endl; //with try-catch these are not executed
	}
	catch(DivisionByZeroException e)
	{
		e.getErrorMessage();
	}
//	catch(int e) //want to catch any thrown integer
//	{
//		cout << "a cannot be equal to " << e << endl;
//	}
////	catch(double e)
//	{
//		cout << "a cannot be equal to " << e << endl;
//	}
	catch(...)
	{
		cout << "This will be shown when other catch instructions are not invoked." << endl;
	}

//	cout << "lalala" << endl; // Everything after the catch is executed

	cout << endl;
	return 0;
}

