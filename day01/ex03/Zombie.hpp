//
// Created by Dmitry ZABROTSKY on 12/25/18.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <ctime>

class Zombie
{

private:
	std::string type;
	std::string name;

public:
	Zombie();
	~Zombie();

	std::string randomName(void);
	void announce(void);
	
};

#endif