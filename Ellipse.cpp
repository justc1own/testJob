#include "classDecloration.hpp"
#include <cmath>

Ellipse::Ellipse(double _r1, double _r2) {
    assert(_r1 > 0 && _r2 > 0);
    this->objType = 1;
    this->r1 = _r1;
    this->r2 = _r2;
}

Point* Ellipse::getPoint(double t) {
    double r1 = this->r1;
    double r2 = this->r2;
    double x = r1 * cos(t);
    double y = r2 * sin(t);
    double z = 0;

    Point* p = new Point(x, y, z);
    return p;
}

void Ellipse::printCurveType() {
    std::cout << "Ellipse:" << std::endl;
}

double Ellipse::getRadius() {
    std::cout << "It is not Circle" << std::endl;
    return 0.0;
}

Point* Ellipse::deriv(double t) {
    double r1 = this->r1;
    double r2 = this->r2;
    
    double x = -1. * sin(t) * r1;
    double y = cos(t) * r2;
    double z = 0;

    Point* p = new Point(x, y, z);
    return p;
}