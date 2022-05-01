// Created by Onur Dursun on 4/29/22.

#include "Fixed.hpp"

int	main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;

	a = Fixed (0);
	Fixed c (4.2f);

	std::cout << "a: " << a << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "a + c: " << a + c << std::endl;
	std::cout << "c + a: " << c + a << std::endl;
	std::cout << "a - c: " << a - c << std::endl;
	std::cout << "c - a: " << c - a << std::endl;
	std::cout << "a * c: " << a * c << std::endl;
	std::cout << "c * a: " << c * a << std::endl;
	std::cout << "a / c: " << a * c << std::endl;
	std::cout << "c / a: " << c * a << std::endl;

	std::cout << "a < c: " << a < c << std::endl;
	std::cout << "c < a: " << c < a << std::endl;
	std::cout << "c > a: " << c > a << std::endl;
	std::cout << "a > c: " << a > c << std::endl;
	std::cout << "a >= c: " << a >= c << std::endl;
	std::cout << "a <= c: " << a <= c << std::endl;
	std::cout << "a == c: " << a == c << std::endl;
	std::cout << "a != c: " << a != c << std::endl;
	std::cout << "a != c: " << a != c << std::endl;

	std::cout << "min(a, c): " Fixed::min(a, c) << std::endl;
	std::cout << "max(a, c): " Fixed::max(a, c) << std::endl;

	return 0;
}