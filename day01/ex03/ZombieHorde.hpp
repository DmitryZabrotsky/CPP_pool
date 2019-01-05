//
// Created by Dmitry ZABROTSKY on 12/25/18.
//

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{

private:
	int number;
	Zombie *horde;

public:
	ZombieHorde(int N);
	~ZombieHorde();
	void announce(void);

};

#endif