#include "classDecloration.hpp"
#include <cmath>

Point::Point(double _x, double _y, double _z) {
    this->x = _x;
    this->y = _y;
    this->z = _z;
}

void Point::printPoint() {
    std::cout << "x=" << this->x << " y=" << this->y << " z=" << this->z;
}