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
bool isValid(string);
bool isValid();

int main()
{
	char cont;
	int choice;
	do
	{
		system("cls");
		initMenu();

		while (!(cin >> choice))
		{
			//cout << "state before: " << cin.rdstate() << endl;
			cin.clear(); //clear when expecting integer values
			//cout << "state after: " << cin.rdstate() << endl;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			system("cls");
			initMenu();
			cout << "You just entered an invalid input." << endl;
		}		

		menuDecision(choice);

		do
		{
			cout << "Do you want to continue the program? (Y/N)" << endl;
			cin >> cont;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

		} while (cont != 'Y' && cont != 'y' && cont != 'N' && cont != 'n');

	} while (cont == 'y' || cont == 'Y');

	cout << endl;
	// system("pause");
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
		do { cout << "Enter the radius: " << endl; cin >> r; } while (!isValid());
		areaCircle(r);
		break;
	case 2:
		cout << "Enter the length: " << endl;
		do { cin >> a; } while (!isValid("The input is invalid"));
		areaSquare(a);
		break;
	case 3:
		cout << "Enter the width and length: " << endl;
		do { cin >> a >> b; } while (!isValid("The input is invalid"));
		areaRectangle(a, b);
		break;
	case 4:
		cout << "Enter the width and height: " << endl;
		do { cin >> a >> h; } while (!isValid("The input is invalid"));
		areaTriangle(a, h);
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
bool isValid(string error_msg)
{
	if (cin.rdstate()) // state is wrong when not equal to zero
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		system("cls");
		initMenu();
		cout << error_msg << endl;
		return false; // return leaves the function.
	}
	return true;
}
bool isValid()
{
	if (cin.rdstate()) // state is wrong when not equal to zero
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		system("cls");
		initMenu();
		return false; // return leaves the function.
	}
	return true;
}