//
// Created by vasily-sviridov on 23.11.2021.
//

#ifndef TRIANGLE_TRIANGLE_HPP
#define TRIANGLE_TRIANGLE_HPP

#include <cstdlib>
#include <cstdint>
#include <cmath>

namespace objects {
    enum class SideType {
        Equilateral,
        Isosceles,
        Scalene,
    };

    enum class AngleType {
        Right,
        Obtuse,
        Acute,
    };

    class Triangle {
    public:
        Triangle() = default;
        Triangle(std::size_t a, std::size_t b, std::size_t c)
            : _a(a), _b(b), _c(c) {};

        double getArea() const;
        uint64_t getPerimeter() const;

        size_t getA() const;
        size_t getB() const;
        size_t getC() const;

        void setA(std::size_t a) const;
        void setB(std::size_t b) const;
        void setC(std::size_t c) const;

        bool isValid() const;

        SideType getTypeBySize() const;

        bool operator ==( const Triangle & other ) const ;
    protected:
        std::size_t _a;
        std::size_t _b;
        std::size_t _c;
        bool valid{};
    };
}


#endif //TRIANGLE_TRIANGLE_HPP
