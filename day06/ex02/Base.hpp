//
// Created by Dmitry ZABROTSKY on 2019-01-22.
//

#ifndef BASE_HPP
#define BASE_HPP


class Base {

public:
	Base();
	Base(Base const &obj);
	virtual ~Base();

	Base &operator=(Base const &obj);
};


#endif
