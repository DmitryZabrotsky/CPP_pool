//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(PowerFist const &obj) : AWeapon(obj) {}

PowerFist &PowerFist::operator=(PowerFist const &obj) {
	setName(obj.getName());
	setApcost(obj.getAPCost());
	setDamage(obj.getDamage());
	return *this;
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist() {}