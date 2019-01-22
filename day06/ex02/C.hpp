//
// Created by Dmitry ZABROTSKY on 2019-01-22.
//

#ifndef C_HPP
#define C_HPP

#include "Base.hpp"

class C : public Base {

public:
	C();
	C(C const &obj);
	virtual ~C();

	C &operator=(C const &obj);
};


#endif
