//
// Created by Dmitry ZABROTSKY on 2019-01-14.
//

#include "Fixed.hpp"

Fixed::Fixed() : fixed_value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) {
	fixed_value = num << fractional_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) {
	fixed_value = roundf(num * (1 << fractional_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator = (const Fixed &src) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &src)
		fixed_value = src.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	return (fixed_value);
}

void Fixed::setRawBits(int const raw) {
	fixed_value = raw;
}

float Fixed::toFloat(void) const {
	return ((float)fixed_value / (1 << fractional_bits));
}

int Fixed::toInt(void) const {
	return (fixed_value / (1 << fractional_bits));
}

std::ostream& operator << (std::ostream& os, Fixed const &num)
{
    // write obj to stream
    os << num.toFloat();
    return os;
}
