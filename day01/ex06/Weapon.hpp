//
// Created by Dmitry ZABROTSKY on 2019-01-09.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {

private:
	std::string type;

public:

	Weapon(std::string weapon);

	std::string const&getType();
	void setType(std::string type);

};


#endif
