//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &obj) {
	*this = obj;
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int damage) {
	Enemy::takeDamage(damage);
}

SuperMutant &SuperMutant::operator=(SuperMutant const &obj) {
	setType(obj.getType());
	setHP(obj.getHP());
	return (*this);
}
