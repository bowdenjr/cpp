#include <iostream>
#include "header01.h"

using namespace std;

int main()
{
    Position dog(10,15);

    dog.getPosition();
    dog.setPosition(80,100);
    dog.getPosition();

    const Position house(100,200); // can't use any functions with this. NOT EVEN GET!

    house.getPosition();
    house.setPosition(444,444);
//    house.getPosition();

    return 0;
}
