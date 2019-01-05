//
// Created by Dmitry ZABROTSKY on 12/25/18.
//

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	number = N;
	horde = new Zombie[number];
};

ZombieHorde::~ZombieHorde()
{
	delete [] horde;
};

void ZombieHorde::announce(void)
{
	for (int i = 0; i < number; ++i)
		horde[i].announce();
};