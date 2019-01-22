//
// Created by Dmitry ZABROTSKY on 2019-01-22.
//

#include "A.hpp"

A::A() {

}

A::A(A const &obj) {
	*this = obj;
}

A::~A() {

}

A &A::operator=(A const &obj) {
	(void)obj;
	return *this;
}
