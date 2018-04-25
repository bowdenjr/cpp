#include <iostream>
#include "header01.h"

using namespace std;

void setX(Position &, int);

int main()
{
    Position dog(10,15);

    dog.getPosition();
    setX(dog,1500);
    dog.getPosition();

    const Position house(100,200); // can't use any functions with this. NOT EVEN GET!

    house.getPosition();
//    house.setPosition(444,444);
//    house.getPosition();

    return 0;
}
void setX(Position & obj, int value)
{
    // Position obj = dog
    obj.x = value;
}
