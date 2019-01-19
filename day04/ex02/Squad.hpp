//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>

class Squad : public ISquad {

private:
	int _units;
	ISpaceMarine *_head;

public:
	Squad();
	Squad(Squad const &obj);
	Squad &operator = (Squad const &obj);

	virtual ~Squad();
	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int number) const;
	virtual int push(ISpaceMarine* unit);

};

#endif
