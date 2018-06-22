#include <iostream>
#include "header.h"

using namespace std;

/*
Write a program which accepts an integer n and calculates sum, product and average from 1 to 1/n i.e. n's reciprocals for ex. 1) If user input 3. then its sum from 1 to 1/3 = 1.833333333333333 then its product from 1 to 1/3 = 0.16 and its average from 1 to 1/3 = 0.601

Sample i/o

Example 1;
Type an integer and press Enter:3
Sum, product and average of reciprocals are:
1.833333333333333
0.1666666666666667
0.6111111111111111

Example 2:
Type an integer and press Enter:50
Sum, product and average of reciprocals are:
4.499205338329423
3.2879494166331567e-65
0.08998410676658847
*/

int main()
{
	cout.precision(24);
	cout << "Please enter your integer..." << endl;
	int n = getValidInput();

	cout << endl;

	cout << getRecipSum(n) << endl;
	cout << getRecipProd(n) << endl;
	cout << getRecipAvg(n) << endl;



	cout << endl;
	return 0;
}

