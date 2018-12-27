//
// Created by Dmitry ZABROTSKY on 12/25/18.
//

#include "Pony.hpp"

Pony::Pony(std::string name):
		name(name)
{
	std::cout << "Pony with name " << name << " was born";
};

Pony::~Pony()
{
	std::cout << "Pony " << name << " ride into the another world\n";
};

void Pony::feedPony(int food)
{
	if (food <= 0)
		std::cout << "Hey! Give me something!\n";
	else if (food > 0 && food <= 10)
		std::cout << "Mmm! So tasty!\n";
	else if (food > 10)
		std::cout << "Dat is insane for me!! I need less.\n";
};