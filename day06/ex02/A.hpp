//
// Created by Dmitry ZABROTSKY on 2019-01-22.
//

#ifndef A_HPP
#define A_HPP

#include "Base.hpp"

class A : public Base {
public:
	A();
	A(A const &obj);
	virtual ~A();

	A &operator=(A const &obj);
};


#endif
