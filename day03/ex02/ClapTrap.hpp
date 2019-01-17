//
// Created by Dmitry ZABROTSKY on 2019-01-17.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

protected:
	unsigned int _hitPoints;
	unsigned int _maxHitPoints;
	unsigned int _energyPoints;
	unsigned int _maxEnergyPoints;
	unsigned int _level;
	std::string _name;
	unsigned int _meleeAttackDamage;
	unsigned int _rangedAttackDamage;
	unsigned int _armorDamageReduction;

public:
	ClapTrap(); 									//default
	ClapTrap(std::string const & name);
	ClapTrap(const ClapTrap &obj); 					// copy
	~ClapTrap();

	ClapTrap& operator = (const ClapTrap& other); 	// =

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};


#endif
