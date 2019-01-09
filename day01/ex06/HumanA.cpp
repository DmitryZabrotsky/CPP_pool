//
// Created by Dmitry ZABROTSKY on 2019-01-09.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(&weapon), name(name)
{}

void HumanA::attack() {
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
