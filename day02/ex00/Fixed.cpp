//
// Created by Dmitry ZABROTSKY on 2019-01-14.
//

#include "Fixed.hpp"

Fixed::Fixed() : fixed_value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &src) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &src)
		fixed_value = src.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_value);
}

void Fixed::setRawBits(int const raw) {
	fixed_value = raw;
}


