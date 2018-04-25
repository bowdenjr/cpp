#include <iostream>
#include "header01.h"

using namespace std;

int main()
{
    A objA;
    B objB;

    objA.setSecretValue(objB, 600); //using a function from class A to change the value of a variable in class B

    cout << objB.getSecretValue() << endl;




    return 0;
}
