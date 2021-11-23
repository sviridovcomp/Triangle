

#include "Triangle.hpp"

double objects::Triangle::getArea() const {
    auto halfPerimeter = (_a + _b + _c) / 2;

    return std::sqrt(halfPerimeter * (halfPerimeter - _a) * (halfPerimeter - _b) * (halfPerimeter - _c));
}

uint64_t objects::Triangle::getPerimeter() const {
    return _a + _b + _c;
}
