//
// Created by Dmitry ZABROTSKY on 2019-01-22.
//

#include "B.hpp"

B &B::operator=(B const &obj) {
	(void)obj;
	return *this;
}

B::B() {

}

B::B(B const &obj) {
	*this = obj;
}

B::~B() {

}
