//
// Created by Dmitry ZABROTSKY on 2019-01-16.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = "Scavtrap";
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << _name << ": Directive one: Destroy humanity!";
	std::cout << " Directive two: Resist Jack at all costs.";
	std::cout << " Directive three: Stand alone!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << _name << ": I'm dead, hope it was after humanity!" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << this->_name << ": Directive one: Destroy humanity!";
	std::cout << " Directive two: Resist Jack at all costs.";
	std::cout << " Directive three: Stand alone!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) {
	if (!_name.empty())
		std::cout << _name << ": My hurmfull code is recompiling from " << obj._name << std::endl;
	else
		std::cout << _name << "Hurmfull code recompiling from " << obj._name << std::endl;
	*this = obj;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &obj) {
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

void ScavTrap::challengeNewcomer(std::string const & target) {
	if (this->_energyPoints < 25)
		std::cout << this->_name << ": out of energy." << std::endl;
	else
	{
		this->_energyPoints -= 25;

		std::string types[] = {"200 push ups", "1000 running", "300 sit ups",
									  "400 squats", "rush full c++ 42 pool in 2 days",
									  "rush full 42 program in 2 monthes"};
		static int r = 0;
		if (!r)
		{
			srand(time(0));
			r++;
		}
		int i = rand() % 6;
		std::cout << this->_name << ": " << target << ", " << types[i] << " for U!" << std::endl;
	}
}
