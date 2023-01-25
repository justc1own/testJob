#include "classDecloration.hpp"
#include <cmath>

Helix::Helix(double _r) {
    assert(_r > 0);
    this->objType = 2;
    this->r = _r;
}

Point* Helix::getPoint(double t) {
    double _r = this->r;

    double x = _r * cos(t);
    double y = _r * sin(t);
    double z = 2 * PI * t;

    Point* p = new Point(x, y, z);
    return p;
}

void Helix::printCurveType() {
    std::cout << "Helix:" << std::endl;
}

double Helix::getRadius() {
    std::cout << "It is not Circle" << std::endl;
    return 0.0;
}

Point* Helix::deriv(double t) {
    double r = this->r;
    double x = -1. * sin(t) * r;
    double y = cos(t) * r;
    double z = 2. * PI;

    Point* p = new Point(x, y, z);
    return p;
}