#include <iostream>
#include "header.h"

using namespace std;

void operationOnPoints();


int main()
{

	operationOnPoints();

	return 0;
}

void operationOnPoints()
{

	Point2D p2(10,20);

	p2.Point::setx(100); //Can still use the superclass function

	cout << p2.getx() << endl;
	cout << p2.gety() << endl;
}
