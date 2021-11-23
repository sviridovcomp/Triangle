

#include "Triangle.hpp"

double objects::Triangle::getArea() const {
    auto halfPerimeter = (_a + _b + _c) / 2;

    return std::sqrt(halfPerimeter * (halfPerimeter - _a) * (halfPerimeter - _b) * (halfPerimeter - _c));
}

uint64_t objects::Triangle::getPerimeter() const {
    return _a + _b + _c;
}

size_t objects::Triangle::getA() const {
    return _a;
}

size_t objects::Triangle::getB() const {
    return _b;
}

size_t objects::Triangle::getC() const {
    return _c;
}

void objects::Triangle::setA(std::size_t a) {
    _a = a;
    _valid = validation();
}

void objects::Triangle::setB(std::size_t b) {
    _b = b;
    _valid = validation();
}

void objects::Triangle::setC(std::size_t c) {
    _c = c;
    _valid = validation();
}

bool objects::Triangle::isValid() const {
    return _valid;
}

objects::SideType objects::Triangle::getTypeBySide() const {
    if (_a == _b and _b == _c and _a == _c) {
        return objects::SideType::Equilateral;
    } else if (_a == _b or _a == _c or _b == _c) {
        return objects::SideType::Isosceles;
    } else {
        return objects::SideType::Scalene;
    }
}

objects::AngleType objects::Triangle::getAngleTypeBySide() const {
    std::array<std::size_t, 3> sides {_a, _b, _c};
    std::sort(sides.begin(), sides.end());
    if (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2]) {
        return AngleType::Right;
    } else if(sides[0] * sides[0] + sides[1] * sides[1] < sides[2] * sides[2]) {
        return AngleType::Obtuse;
    } else {
        return AngleType::Acute;
    }
}

bool objects::Triangle::validation() {
    return _a + _b >= _c and _b + _c >= _a and _a + _c >= _b;
}

bool objects::Triangle::operator==(const objects::Triangle &other) const {
    return _a == other.getA() and _b == other.getB() and _c == other.getC();
}
