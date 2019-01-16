//
// Created by Dmitry ZABROTSKY on 2019-01-16.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap {

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
	FragTrap(); 									//default
	FragTrap(std::string const & name);
	FragTrap(const FragTrap &obj); 					// copy
	~FragTrap();

	FragTrap& operator = (const FragTrap& other); 	// =

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void vaulthunter_dot_exe(std::string const & target);
};


#endif
