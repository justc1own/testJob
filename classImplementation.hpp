#pragma once
#include <iostream>
#include <assert>

#define PI 3.14159265

class Point {
private:
    int x, y, z;
public:
    int x, y, z;
    Point(int _x, int _y, int _z) {
        this->x = _x;
        this->y = _y;
        this->z = _z;
    }

    void printPoint(Point* p) {}
};


class Curve {
private:

public:
    virtual ~figure() {}

    virtual Point* getPoint(double t);
     
    //virtual Point* deriv(double t) = 0; 
};

class Circle:Curve {
private:
    double r;
public:
    Circle(double _r);

    virtual getPoint(double t);
    double getCircleRadius();
    
}

class Ellipse:Curve {
private:
    double r1, r2;
public: 
    Ellipse(double _r1, double _r2);

    virtual getPoint(double t);
}

class Helix:Curve{
private: 
    double r;
public:

    Helix();
    virtual getPoint(double t);

}