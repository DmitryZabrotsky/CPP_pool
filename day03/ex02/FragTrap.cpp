//
// Created by Dmitry ZABROTSKY on 2019-01-16.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = "Fragtrap";
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << _name << ": Directive one: Protect humanity!";
	std::cout << " Directive two: Obey Jack at all costs.";
	std::cout << " Directive three: Dance!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << _name << ": I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << _name << ": Directive one: Protect humanity!";
	std::cout << " Directive two: Obey Jack at all costs.";
	std::cout << " Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) {
	if (!_name.empty())
		std::cout << _name << ": Recompiling my combat code from " << obj._name << std::endl;
	else
		std::cout << _name << "Compiling combat code from " << obj._name << std::endl;
	*this = obj;
}

FragTrap &FragTrap::operator = (const FragTrap &obj) {
	this->_hitPoints = obj._hitPoints;
	this->_maxHitPoints = obj._maxHitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_maxEnergyPoints = obj._maxEnergyPoints;
	this->_name = obj._name;
	this->_meleeAttackDamage = obj._meleeAttackDamage;
	this->_rangedAttackDamage = obj._rangedAttackDamage;
	this->_armorDamageReduction = obj._armorDamageReduction;
	return (*this);
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->_energyPoints < 25)
		std::cout << this->_name << ": Not enough energy for this!" << std::endl;
	else
	{
		this->_energyPoints -= 25;

		std::string attack_types[] = {"Throw granade", "Rocket firing", "Bluster firing",
									  "Joke", "ONE PUNCH MAN punch", "Stab in the back"};
		static int r = 0;
		if (!r)
		{
			srand(time(0));
			r++;
		}
		int i = rand() % 6;
		std::cout << this->_name << ": " << attack_types[i] << " to " << target << std::endl;
	}
}
