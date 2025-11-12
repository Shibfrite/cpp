// main.cpp
#include <iostream>
#include "Fixed.hpp"

int main()
{
    std::cout << "=== constructors / stream ===" << std::endl;
    Fixed a;                          // default
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) ); // multiplication, float constructor
    Fixed c(10);                      // int constructor
    Fixed d(c);                       // copy constructor

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;

    std::cout << "\n=== pre/post increment / decrement ===" << std::endl;
    Fixed e;
    std::cout << "e = " << e << std::endl;
    std::cout << "++e = " << ++e << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "e++ = " << e++ << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "--e = " << --e << std::endl;
    std::cout << "e-- = " << e-- << std::endl;
    std::cout << "e = " << e << std::endl;

    std::cout << "\n=== arithmetic ===" << std::endl;
    Fixed x(3.5f);
    Fixed y(1.25f);
    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << "x + y = " << (x + y) << std::endl;
    std::cout << "x - y = " << (x - y) << std::endl;
    std::cout << "x * y = " << (x * y) << std::endl;
    std::cout << "x / y = " << (x / y) << std::endl;

    std::cout << "\n=== comparisons ===" << std::endl;
    Fixed p(2);
    Fixed q(3);
    std::cout << "p = " << p << ", q = " << q << std::endl;
    std::cout << std::boolalpha;
    std::cout << "p > q: " << (p > q) << std::endl;
    std::cout << "p < q: " << (p < q) << std::endl;
    std::cout << "p >= q: " << (p >= q) << std::endl;
    std::cout << "p <= q: " << (p <= q) << std::endl;
    std::cout << "p == q: " << (p == q) << std::endl;
    std::cout << "p != q: " << (p != q) << std::endl;

    std::cout << "\n=== min / max (non-const) ===" << std::endl;
    Fixed m1(7.25f);
    Fixed m2(7.25f);
    Fixed& rmin = Fixed::min(m1, m2);
    Fixed& rmax = Fixed::max(m1, m2);
    std::cout << "m1 = " << m1 << ", m2 = " << m2 << std::endl;
    std::cout << "min(m1,m2) = " << rmin << std::endl;
    std::cout << "max(m1,m2) = " << rmax << std::endl;

    std::cout << "\n=== min / max (const) ===" << std::endl;
    Fixed const cm1(1.5f);
    Fixed const cm2(4.75f);
    Fixed const& cmin = Fixed::min(cm1, cm2);
    Fixed const& cmax = Fixed::max(cm1, cm2);
    std::cout << "cm1 = " << cm1 << ", cm2 = " << cm2 << std::endl;
    std::cout << "min(cm1,cm2) = " << cmin << std::endl;
    std::cout << "max(cm1,cm2) = " << cmax << std::endl;

    std::cout << "\n=== chaining and mixed usage ===" << std::endl;
    Fixed chain = (x + y) * Fixed(2) - Fixed(1);
    std::cout << "chain = (x + y) * 2 - 1 = " << chain << std::endl;

    return 0;
}
