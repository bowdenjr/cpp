#include "header01.h"
#include <iostream>

using namespace std;

Position::Position(int x, int y) //CONSTRUCTOR
{
    this->x = x;
    this->y = y;
}
Position::~Position() //DECONSTRUCTOR
{

}
void Position::getPosition() const // Read-only class
{
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

void Position::setPosition(int x, int y)
{
    this->x = x;
    this->y = y;
}
