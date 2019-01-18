//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {}

Sorcerer::Sorcerer(std::string const name, std::string const title) {
	_name = name;
	_title = title;
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

std::string Sorcerer::getName() const {
	return (this->_name);
}

std::string Sorcerer::getTitle() const {
	return (this->_title);
}

Sorcerer::Sorcerer(Sorcerer const &obj) {
	*this = obj;
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer &Sorcerer::operator = (Sorcerer const &obj) {
	this->_name = obj._name;
	this->_title = obj._title;
	return (*this);
}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

void Sorcerer::polymorph(const Victim & obj) const {
	obj.getPolymorphed();
}


std::ostream &operator<<(std::ostream &os, Sorcerer const &obj) {
	return (os << "I am " << obj.getName() << ", " << obj.getTitle() << ", and I like ponies !" << std::endl);
}
