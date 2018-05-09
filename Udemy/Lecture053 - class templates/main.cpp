#include <iostream>
#include "header01.h"

using namespace std;
// FUNCTION TEMPLATES ARE GENERALISATION OF FUNCTIONS.

void operationOnPoints();

template<typename T, typename T2> //T is our shortcut for type. Works when both are the same type, i.e both double or both int.
T add(T var1, T2 var2)
{
    return var1 + var2;
}
//
//template<>
//Point2D add(Point2D var1,Point2D var2)
//{
//    return var1+var2;
//}

typedef Point<int> PointInt; //Like a "rename" for types

int main()
{
	operationOnPoints();

//    cout << add<double,double>(2,5.5) << endl;
//    cout << static_cast<int>(6.5) << endl;

	return 0;
}

void operationOnPoints()
{
//    PointInt a(5);
    Point<int*> b(10.5);
//
//    cout << b.getx() << endl;
//    cout << b.gety() << endl;
}
