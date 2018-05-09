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

template<>
Point2D add(Point2D var1,Point2D var2)
{
    return var1+var2;
}

// The bad way of doing it:
//int add(int var1, int var2)
//{
//    return(var1 + var2);
//}
//double add(double var1, double var2)
//{
//    return(var1 + var2);
//}
//double add(double var1, int var2)
//{
//    return(var1 + var2);
//}
//double add(int var1, double var2)
//{
//    return(var1 + var2);
//}

int main()
{
	operationOnPoints();

//    cout << add<double,double>(2,5.5) << endl;
//    cout << static_cast<int>(6.5) << endl;

	return 0;
}

void operationOnPoints()
{

    Point2D p1(10,67);
    Point2D p2(50,3);

    Point2D sum = add(p1,p2);

    cout <<sum.getx() << endl;
    cout <<sum.gety() << endl;

}
