//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8) {}

PowerFist::PowerFist(PowerFist const &obj) {
	*this = obj;
}

PowerFist &PowerFist::operator=(PowerFist const &obj) {
	setName(obj.getName());
	setApcost(obj.getAPCost());
	setDamage(obj.getDamage());
	return *this;
}

void PowerFist::attack() {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist() {}