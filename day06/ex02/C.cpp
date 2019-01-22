//
// Created by Dmitry ZABROTSKY on 2019-01-22.
//

#include "C.hpp"

C::C() {

}

C::C(C const &obj) {
	*this = obj;
}

C::~C() {

}

C &C::operator=(C const &obj) {
	(void)obj;
	return *this;
}
