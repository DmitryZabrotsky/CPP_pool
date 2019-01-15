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

	// copy constructor
	Fixed(const Fixed &src);

	// assignation operator overload
	Fixed& operator = (const Fixed& other);

	// getter
	int getRawBits(void) const;

	// setter
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, Fixed const &num);

#endif
