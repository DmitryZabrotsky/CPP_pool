//
// Created by Dmitry ZABROTSKY on 2019-01-14.
//

#include "Fixed.hpp"

Fixed::Fixed() : fixed_value(0) {
}

Fixed::Fixed(const int num) {
	fixed_value = num << fractional_bits;
}

Fixed::Fixed(const float num) {
	fixed_value = roundf(num * (1 << fractional_bits));
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed &src) {
	*this = src;
}

Fixed &Fixed::operator = (const Fixed &src) {
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

bool Fixed::operator > (Fixed const &num) {
	return (fixed_value > num.getRawBits() ? true : false);
}

bool Fixed::operator < (Fixed const &num) {
	return (fixed_value < num.getRawBits() ? true : false);
}

bool Fixed::operator >= (Fixed const &num) {
	return (fixed_value >= num.getRawBits() ? true : false);
}

bool Fixed::operator <= (Fixed const &num) {
	return (fixed_value <= num.getRawBits() ? true : false);
}

bool Fixed::operator == (Fixed const &num) {
	return (fixed_value == num.getRawBits() ? true : false);
}

bool Fixed::operator != (Fixed const &num) {
	return (fixed_value != num.getRawBits() ? true : false);
}

Fixed Fixed::operator + (Fixed const &num) {
	return (Fixed(this->toFloat() + num.toFloat()));
}

Fixed Fixed::operator - (Fixed const &num) {
	return (Fixed(this->toFloat() - num.toFloat()));
}

Fixed Fixed::operator * (Fixed const &num) {
	return (Fixed(this->toFloat() * num.toFloat()));
}

Fixed Fixed::operator / (Fixed const &num) {
	return (Fixed(this->toFloat() / num.toFloat()));
}

Fixed & Fixed::operator++() {
	fixed_value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	++(*this);
	return (tmp);
}

Fixed & Fixed::operator--() {
	fixed_value--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	--(*this);
	return (tmp);
}

Fixed const & Fixed::min(Fixed const &a, Fixed const &b) {
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed const & Fixed::max(Fixed const &a, Fixed const &b) {
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

Fixed const & Fixed::min(Fixed &a, Fixed &b) {
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed const & Fixed::max(Fixed &a, Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}
