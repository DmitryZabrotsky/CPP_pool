//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Squad.hpp"

Squad::Squad() : _units(0), _head(NULL) {}

Squad::Squad(Squad const &obj) {*this = obj;}

Squad &Squad::operator=(const Squad &obj) {
	this->_units = obj._units;
	ISpaceMarine *ptr = obj._head;
	*_head = *ptr;
	for(int i = 1; i < obj._units; i++) {
		*(_head->next_unit) = (*ptr->next_unit);
		ptr = ptr->next_unit;
	}
	return (*this);
}

Squad::~Squad() {
	ISpaceMarine *to_del = _head;
	ISpaceMarine *ptr;
	for (int i = 0; i < _units; i++) {
		ptr = to_del->next_unit;
		delete to_del;
		to_del = ptr;
	}
}

int Squad::getCount() const {
	return (_units);
}

ISpaceMarine *Squad::getUnit(int number) const {
	ISpaceMarine *ptr = _head;
	for (int i = 0; i < _units; i++) {
		if (i == number)
			return (ptr);
		ptr = ptr->next_unit;
	}
	return (NULL);
}

int Squad::push(ISpaceMarine *unit) {
	if (unit == NULL)
		return (_units);
	if (_units == 0)
	{
		_head = unit;
		_units++;
		return (_units);
	}
	ISpaceMarine *ptr = _head;
	for (int i = 0; i < _units - 1; i++) {
		ptr = ptr->next_unit;
	}
	ptr->next_unit = unit;
	_units++;
	return (_units);
}




