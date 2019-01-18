//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &obj) : AWeapon(obj) {}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &obj) {
	setName(obj.getName());
	setApcost(obj.getAPCost());
	setDamage(obj.getDamage());
	return *this;
}

void PlasmaRifle::attack() {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle() {}