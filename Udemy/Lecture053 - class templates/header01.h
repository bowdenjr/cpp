#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>

using namespace std;


template<typename T>
class Point // Base, parent or super class.
{
    protected:
        T x;
    public:
        Point(T =0);
        ~Point();
        T getx();
        void setx(T);
};

template <typename T>
T Point<T>::getx()
{
    cout << "This is the standard getX function" << endl;
    return x;
}

template<typename T>
Point<T>::Point(T x)
{
    this->x = x;
    cout << "The constructor from the Point class has been invoked" <<endl;
}
template<typename T>
Point<T>::~Point()
{
    cout << "The destructor from the Point class has been invoked" <<endl;
}

template<typename T>
void Point<T>::setx(T x)
{
    this->x = x;
    cout << "I am from Point" << endl;
}

template<>
double Point<double>::getx()
{
    cout << "This function will be executed only when Point<double> is required" << endl;
    return this->x;
}

template<typename K>
class Point<K*> //Very advanced and rare topic
{
    public:
        Point(K a=0) {cout << "You can't use pointers here" << endl;}
};


template<typename T>
class Point2D : public Point<T> // INHERIT - copies the declaration (int his header file) and the definitions (in header.cpp). Derived, child or sub class
{
    protected:
        T y;
    public:
        Point2D(T = 0, T = 0);
        ~Point2D();
        T gety() {return y;}
        void sety(T);
        void setx(T);
        void setxy(T,T);
        Point2D operator+(Point2D);

};

template<typename T>
Point2D<T>::Point2D(T x, T y) : Point<T>(x)//subclasses only need initialisation of new variables.
{
    this->y = y;
     cout << "The constructor from the Point2D class has been invoked" <<endl;
}

template<typename T>
Point2D<T>::~Point2D()
{
    cout << "The destructor2D from the Point2D class has been invoked" <<endl;
}


template<typename T>
void Point2D<T>::sety(T y)
{
    this->y = y;
}

template<typename T>
void Point2D<T>::setx(T x)
{
    this->x = x;
    cout << "I am from Point2D" << endl;

}

template<typename T>
void Point2D<T>::setxy(T x, T y)
{
    setx(x);
    sety(y);
}

template<typename T>
Point2D<T> Point2D<T>::operator+(Point2D o)
{
    Point2D tmp;

    tmp.setx(this->getx() + o.getx());
    tmp.sety(this->gety() + o.gety());

    return tmp;
}

template<>
class Point<char> //CHARACTER IS A SPECIAL CASE
{
    public:
        Point(char a=0) { cout << "This is from Point(char)";}
};



#endif // HEADER_H_INCLUDED

