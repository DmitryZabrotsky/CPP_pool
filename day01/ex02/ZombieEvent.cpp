//
// Created by Dmitry ZABROTSKY on 12/25/18.
//

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie* zombie = new Zombie(type, name);
	return (zombie);
}

std::string ZombieEvent::randomName(void) {
	std::string names[5] = {"Walt", "Hank", "Jessy",
	"Sara", "Cally"};
	return (names[rand()%5]);
}

void ZombieEvent::randomChump(void)
{
	srand(time(0));
	Zombie zombie = Zombie(type, ZombieEvent::randomName());
	zombie.announce();
}