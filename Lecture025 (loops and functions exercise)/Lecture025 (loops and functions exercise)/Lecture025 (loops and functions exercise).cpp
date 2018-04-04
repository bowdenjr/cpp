#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;
void initMenu();
void menuDecision(int);
double areaCircle(double);
const double pi = 3.14;
double areaSquare(double);
double areaRectangle(double, double);
double areaTriangle(double, double);


int main()
{

	char cont;
	int choice;

	do
	{
		system("cls");
		initMenu();

		cin >> choice;

		menuDecision(choice);

		cout << "Do you want to continue the program? (Y/N)" << endl;
		cin >> cont;
	} while ((cont == 'Y' || cont == 'y' )&& (cont != 'N' || cont != 'n'));

	cout << endl;
	system("pause");
	return 0;
}


void initMenu()
{
	cout << "Enter option: " << endl;
	cout << "1. Circle" << endl;
	cout << "2. Square" << endl;
	cout << "3. Rectangle" << endl;
	cout << "4. Triangle" << endl;


}
void menuDecision(int choice)
{
	double r, a, b, h;
	switch (choice)
	{
	case 1:
		cout << "Enter the radius: " << endl;
		cin >> r;
		areaCircle(r);
		break;
	case 2:
		cout << "Enter the length: " << endl;
		cin >> a;
		areaSquare(a);
		break;
	case 3:
		cout << "Enter the width and length: " << endl;
		cin >> a >> b;
		areaRectangle(a,b);
		break;
	case 4:
		cout << "Enter the width and height: " << endl;
		cin >> a >> h;
		areaTriangle(a,h);
		break;
	default:
		cout << "You didn't choose a valid option" << endl;
	}

}
double areaCircle(double r)
{
	double result = 3.14 * r * r;
	cout << "The area of a circle that has radius " << r << " is " << result << endl;
	return result;
}
double areaSquare(double a)
{
	double result = a * a;
	cout << "The area of a square that has length " << a << " is " << result << endl;
	return result;
}
double areaRectangle(double a, double b)
{
	double result = a * b;
	cout << "The area of a rectangle that has length " << a << " and width " << b << " is " << result << endl;
	return result;
}
double areaTriangle(double a, double h)
{
	double result = (a * h) / 2;
	cout << "The area of a triangke that has width " << a << " and height " << h << " is " << result << endl;
	return result;
}