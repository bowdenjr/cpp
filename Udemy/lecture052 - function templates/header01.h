#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

class Point // Base, parent or super class.
{
    protected: // Private for main.cpp, but allows inheritance to children
        int x;
    public:
        Point(int =0); // default value for constructor
        ~Point();
        int getx() {return x;}
        void setx(int);
};

class Point2D : public Point // INHERIT - copies the declaration (int his header file) and the definitions (in header.cpp). Derived, child or sub class
{
    protected:
        int y;
    public:
        Point2D(int = 0, int = 0);
        ~Point2D();
        int gety() {return y;}
        void sety(int);
        void setx(int);
        void setxy(int,int);
        Point2D operator+(Point2D);

};

#endif
