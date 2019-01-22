//
// Created by Dmitry ZABROTSKY on 2019-01-22.
//

#ifndef B_HPP
#define B_HPP

#include "Base.hpp"

class B : public Base {

public:
	B();
	B(B const &obj);
	virtual ~B();

	B &operator=(B const &obj);

};


#endif
