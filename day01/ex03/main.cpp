//
// Created by Dmitry ZABROTSKY on 12/25/18.
//

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
	ZombieHorde horde = ZombieHorde(4);
	horde.announce();
	return 0;
}