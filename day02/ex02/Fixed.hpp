	//
// Created by Dmitry ZABROTSKY on 2019-01-14.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:
	int fixed_value;
	static const int fractional_bits = 8;

public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	~Fixed();
	Fixed(const Fixed &src); // copy constructor

	Fixed& operator = (const Fixed& other);
	
	bool operator > (Fixed const &num);
	bool operator < (Fixed const &num);
	bool operator >= (Fixed const &num);
	bool operator <= (Fixed const &num);
	bool operator == (Fixed const &num);
	bool operator != (Fixed const &num);

	Fixed operator + (Fixed const &num);
	Fixed operator - (Fixed const &num);
	Fixed operator * (Fixed const &num);
	Fixed operator / (Fixed const &num);

	Fixed & operator++(); // prefix
	Fixed operator++(int); // postfix
	Fixed & operator--(); // prefix
	Fixed operator--(int); // postfix

	static Fixed const & min(Fixed const &a, Fixed const &b);
	static Fixed const & max(Fixed const &a, Fixed const &b);
	static Fixed const & min(Fixed &a, Fixed &b);
	static Fixed const & max(Fixed &a, Fixed &b);

	int getRawBits(void) const; // get
	void setRawBits(int const raw); // set

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, Fixed const &num);

#endif
