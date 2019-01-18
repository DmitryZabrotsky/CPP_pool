//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &obj) {
	*this = obj;
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &obj) {
	setHP(obj.getHP());
	setType(obj.getType());
	return (*this);
}
