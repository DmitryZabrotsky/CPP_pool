//
// Created by Dmitry ZABROTSKY on 2019-01-22.
//

#include "Base.hpp"

Base::Base() {

}

Base::Base(Base const &obj) {
	*this = obj;
}

Base::~Base() {

}

Base &Base::operator=(Base const &obj) {
	(void)obj;
	return (*this);
}
