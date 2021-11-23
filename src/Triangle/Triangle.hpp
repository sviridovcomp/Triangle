//
// Created by vasily-sviridov on 23.11.2021.
//

#ifndef TRIANGLE_TRIANGLE_HPP
#define TRIANGLE_TRIANGLE_HPP

#include <cstdlib>
#include <cstdint>
#include <cmath>
#include <array>
#include <algorithm>

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
                : _a(a), _b(b), _c(c) {
            _valid = validation();
        };

        double getArea() const;

        uint64_t getPerimeter() const;

        [[nodiscard]] size_t getA() const;

        [[nodiscard]] size_t getB() const;

        [[nodiscard]] size_t getC() const;

        void setA(std::size_t a);

        void setB(std::size_t b);

        void setC(std::size_t c);

        [[nodiscard]] bool isValid() const;

        [[nodiscard]] SideType getTypeBySide() const;

        [[nodiscard]] AngleType getAngleTypeBySide() const;

        bool operator==(const Triangle &other) const;

    private:
        std::size_t _a;
        std::size_t _b;
        std::size_t _c;
        bool _valid;

        bool validation();
    };
}


#endif //TRIANGLE_TRIANGLE_HPP
