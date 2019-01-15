//
// Created by Dmitry ZABROTSKY on 2019-01-14.
//

#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "\n\n    ** more tests **    \n\n";

	std::cout << "a = " << a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl << std::endl;

	a = 8;
	Fixed c(2);

	std::cout << "a = " << a << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "a + c = " << a + c << std::endl;
	std::cout << "a - c = " << a - c << std::endl;
	std::cout << "c - a = " << c - a << std::endl;
	std::cout << "a * c = " << a * c << std::endl;
	std::cout << "a / c = " << a / c << std::endl;

	(a > c) ? std::cout << "a > c " << std::endl : std::cout << "a < c " << std::endl;
	(a >= c) ? std::cout << "a >= c " << std::endl : std::cout << "a =< c " << std::endl;
	(a < c) ? std::cout << "a < c " << std::endl : std::cout << "a > c " << std::endl;
	(a <= c) ? std::cout << "a <= c " << std::endl : std::cout << "a >= c " << std::endl;
	(a == c) ? std::cout << "a == c " << std::endl : std::cout << "a != c " << std::endl;
	(a != c) ? std::cout << "a != c " << std::endl : std::cout << "a != c " << std::endl;

	return (0);
}