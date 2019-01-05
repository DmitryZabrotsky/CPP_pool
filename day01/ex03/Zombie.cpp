//
// Created by Dmitry ZABROTSKY on 12/25/18.
//

#include "Zombie.hpp"

std::string Zombie::randomName(void) {
	static int n = 0;
	std::string names[5] = {"Walt", "Hank", "Jessy",
	"Sara", "Cally"};
	if (!n)
	{
		srand(time(0));
		n++;
	}
	return (names[rand() % 5]);
}

Zombie::Zombie()
{
	type = "default";
	name = Zombie::randomName();
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