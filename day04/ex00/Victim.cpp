//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#include "Victim.hpp"

Victim::Victim() {}

Victim::Victim(std::string const name) {
	_name = name;
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim(Victim const &obj) {
	*this = obj;
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

Victim &Victim::operator=(Victim const &obj) {
	if (this != &obj)
		this->_name = obj._name;
	return (*this);
}

std::string Victim::getName() const {
	return (this->_name);
}

void Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Victim const &obj) {
	return (os << "I'm " << obj.getName() << " and I like otters !" << std::endl);
}
