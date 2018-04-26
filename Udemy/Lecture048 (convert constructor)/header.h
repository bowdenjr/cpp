#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

class Integer
{
    int nr;
public:
    Integer() {};
    Integer(int); //Convert constructor
    int getnr() {return nr;}
    operator int();
    int operator += (Integer);
};

#endif // HEADER_H_INCLUDED
