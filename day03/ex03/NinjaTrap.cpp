//
// Created by Dmitry ZABROTSKY on 2019-01-17.
//

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap() {
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_name = "Ninjatrap";
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	std::cout << _name << ": The unseen blade is the deadliest." << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << _name << ": Ignorance is fatal." << std::endl;
}

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name) {
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	std::cout << _name << ": I am the blade in the darkness." << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &obj) {
	if (!_name.empty())
		std::cout << _name << ": No technique is forbidden. Making shadow from " << obj._name << std::endl;
	else
		std::cout << "Making shadow from " << obj._name << std::endl;
	*this = obj;
}

NinjaTrap &NinjaTrap::operator = (const NinjaTrap &obj) {
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

void NinjaTrap::ninjaShoebox(const ClapTrap &obj) {
	std::cout << obj.getName() << "! Embrace the shadow... or die in darkness!" << std::endl;
}

void NinjaTrap::ninjaShoebox(const FragTrap &obj) {
	std::cout << obj.getName() << "! Only the worthy will survive." << std::endl;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &obj) {
	std::cout << obj.getName() << "! Cut the last breath from them." << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &obj) {
	std::cout  << "Challenge me, " << obj.getName() << ", you shall not be an orphan long!" << std::endl;
}
