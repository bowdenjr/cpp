#include "test.h"

Test::Test(int x, int y, int value)
{
    this->x = x;
    this->y = y;
    this->p = new int(value); // would be a shared pointer if using this constructor
}

Test::~Test()
{
    delete p;
}

Test::Test(const Test & obj) //COPY CONSTRUCTOR - INPUT A REFERENCE TO AN OBJECT
{
    this->p = new int(*(obj.p));
    this->x = obj.x;
    this->y = obj.y;
}
