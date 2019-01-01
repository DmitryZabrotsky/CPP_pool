//
// Created by Dmitry ZABROTSKY on 12/25/18.
//

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name):
		type(type), name(name)
{
	std::cout << "Zombie " << name << " ready.\n";
}

Zombie::~Zombie()
{
	std::cout << type << " " << name << " is dead.\n";
}

void Zombie::announce(void)
{
	std::cout << name << " " << type << " Braiiiiiiinnnssss...\n";
}