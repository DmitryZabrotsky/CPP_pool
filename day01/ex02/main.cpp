//
// Created by Dmitry ZABROTSKY on 12/25/18.
//

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	Zombie stolb = Zombie("assasin", "Etsio");
	stolb.announce();

	std::cout << std::endl;

	ZombieEvent lopata;
	lopata.setZombieType("ogorodnik");
	lopata.randomChump();

	std::cout << std::endl;

	ZombieEvent zombie;
	zombie.setZombieType("varshik");
	Zombie *walt = zombie.newZombie("Heizenberg");
	walt->announce();
	delete walt;
}