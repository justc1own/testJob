#include "classDecloration.hpp"
#include <cmath>

Circle::Circle(double _r) {
    assert(_r > 0);
    this->objType = 0;
    this->r = _r;
}

Point* Circle::getPoint(double t) {
    double r = this->r; 
    double x = r * cos(t); // ???
    double y = r * sin(t);
    double z = 0;

    Point* p = new Point(x, y, z);
    return p;
}

void Circle::printCurveType() {
    std::cout << "Circle:" << std::endl;
}

double Circle::getRadius() {
    return this->r;
}

Point* Circle::deriv(double t) {
    double r = this->r;
    double x = -1. * sin(t) * r;
    double y = cos(t) * r;
    double z = 0;

    Point* p = new Point(x, y, z);
    return p;
}