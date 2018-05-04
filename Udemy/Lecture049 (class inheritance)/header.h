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

};

/*
    class Point 2D: public Point
    everything in Point will be in the following section of Point2D (except constructor and destructor)
    private - CANNOT ACCESS
    protected -> protected
    public -> public

    class Point 2D: protected Point
    everything in Point will be in the following section of Point2D (except constructor and destructor)
    private - CANNOT ACCESS
    protected -> protected
    public -> protected

    class Point 2D: private Point
    everything in Point will be in the following section of Point2D (except constructor and destructor)
    private - CANNOT ACCESS
    protected -> private
    public -> private




*/



class Point3D : public Point2D
{
    // COMPLETE THIS YOURSELF
};




#endif // HEADER_H_INCLUDED
