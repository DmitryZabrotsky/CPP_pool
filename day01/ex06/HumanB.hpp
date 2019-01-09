//
// Created by Dmitry ZABROTSKY on 2019-01-09.
//

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

private:
	Weapon *weapon;
	std::string name;

public:
	HumanB(std::string name);
	void setWeapon(Weapon &weapon);
	void attack();

};


#endif
