//
// Created by Dmitry ZABROTSKY on 12/25/18.
//

#include <iostream>

class Zombie
{

private:
	std::string type;
	std::string name;

public:
	Zombie(std::string type, std::string name);
	~Zombie();
	void announce(void);
	
};