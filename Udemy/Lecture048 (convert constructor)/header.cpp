#include "header.h"
#include <iostream>

using namespace std;

Integer::Integer(int value)
{
    this->nr = value;
}
Integer::operator int()
{
    return this->nr;
}
int Integer::operator+=(Integer o)
{
    this->nr = o.getnr() + this->nr;
    return this->nr;
}
