#pragma once
#include <iostream>
#include <cassert>

#define PI 3.14159265

class Point {
//private:
    
public:
    double x, y, z;
    Point(double _x, double _y, double _z);

    void printPoint();
};


class Curve {
//private:

public:
    int objType;
    virtual Point* getPoint(double t) = 0;
    virtual void printCurveType() = 0;
    virtual double getRadius() = 0;
    virtual Point* deriv(double t) = 0; 
    void printDeriv(Point* p);
};

class Circle : public Curve {
private:
    double r;
public:
    Circle(double _r);

    Point* getPoint(double t);
    void printCurveType();
    double getRadius();
    Point* deriv(double t);
};

class Ellipse : public Curve {
private:
    double r1, r2;
public: 
    Ellipse(double _r1, double _r2);

    Point* getPoint(double t);
    void printCurveType();
    double getRadius();
    Point* deriv(double t);
};

class Helix : public Curve{
private: 
    double r;
public:
    Helix(double _r);
    
    Point* getPoint(double t);
    void printCurveType();
    double getRadius();
    Point* deriv(double t);
};