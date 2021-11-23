#include <iostream>
#include "src/Triangle/Triangle.hpp"

int main() {
    using namespace objects;
    Triangle t0(10, 7, 5);

    std::cout << std::boolalpha << t0.isValid() << std::endl;
    std::cout << t0.getA() << " " << t0.getB() << " " << t0.getC() << std::endl;

    Triangle t1(5, 10, 7);
    if (t0 == t1)
        std::cout << " true " << std::endl;
    if (t0.getTypeBySide() == SideType::Scalene)
        std::cout << "t0 is scalene triangle " << std::endl;

    Triangle t2(8, 8, 8);
    if (t2.getTypeBySide() == SideType::Equilateral)
        std::cout << "t2 is equilateral triangle " << std::endl;



    std::cout << "t2 perimeter " << t2.getPerimeter() << std::endl;
    std::cout << "t2 area " << t2.getArea() << std::endl;

    Triangle t3(8, 2, 5);
    std::cout << std::boolalpha << t3.isValid() << std::endl;
    std::cout << "t3 area " << t3.getArea() << std::endl;

    Triangle t4(5, 5, 5);
    t4.setC(2);
    if (t4.getTypeBySide() == SideType::Isosceles)
        std::cout << "t4 is isosceles triangle " << std::endl;

    Triangle t5 {3, 4, 5};
    if (t5.getAngleTypeBySide() == AngleType::Right) {
        std::cout << "t5 is right" << '\n';
    }

    return 0;
}