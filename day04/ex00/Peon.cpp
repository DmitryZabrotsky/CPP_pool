//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#include "Peon.hpp"

Peon::Peon() {}

Peon::Peon(std::string const name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &obj) {
	*this = obj;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(Peon const &obj) {
	if (this != &obj)
		this->_name = obj._name;
	return (*this);
}

std::string Peon::getName() const {
	return (this->_name);
}

void Peon::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}