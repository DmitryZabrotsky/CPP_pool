//
// Created by Dmitry ZABROTSKY on 2019-01-16.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap {

private:
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
	ScavTrap(); 									//default
	ScavTrap(std::string const & name);
	ScavTrap(const ScavTrap &obj); 					// copy
	~ScavTrap();

	ScavTrap& operator = (const ScavTrap& other); 	// =

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void challengeNewcomer(std::string const & target);
};


#endif