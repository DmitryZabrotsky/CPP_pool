//
// Created by Dmitry ZABROTSKY on 2019-01-09.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{}

void HumanB::attack() {
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
