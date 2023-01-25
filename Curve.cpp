#include "classDecloration.hpp"
#include <cmath>

void Curve::printDeriv(Point* p) {
    std::cout << "deriv={";
    p->printPoint();
    std::cout << "}";
}