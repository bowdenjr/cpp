#ifndef HEADER01_H_INCLUDED
#define HEADER01_H_INCLUDED

class Position
{
    int x, y;
    public:
    Position(int, int);
    ~Position();
    void getPosition() const;
    void setPosition(int, int);
    friend void setX(Position &, int); //THIS IS A FRIEND OF THIS CLASS, THIS MEANS IT CAN USE ITS PRIVATE VARS
};

#endif // HEADER01_H_INCLUDED
