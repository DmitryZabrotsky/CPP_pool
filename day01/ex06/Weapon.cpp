//
// Created by Dmitry ZABROTSKY on 2019-01-09.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : type(weapon)
{
}

std::string const &Weapon::getType() {
	return (type);
}

void Weapon::setType(std::string type) {
	this->type = type;
}
