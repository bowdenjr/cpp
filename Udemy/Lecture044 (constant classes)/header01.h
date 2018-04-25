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
};

#endif // HEADER01_H_INCLUDED
