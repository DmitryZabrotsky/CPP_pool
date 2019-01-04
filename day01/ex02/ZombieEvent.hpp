//
// Created by Dmitry ZABROTSKY on 12/25/18.
//

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <ctime>
#include "Zombie.hpp"

class ZombieEvent
{

private:
	std::string type;

public:
	void 		setZombieType(std::string type);
	Zombie 		*newZombie(std::string name);

	std::string randomName(void);
	void 		randomChump(void);
};

#endif