//
// Created by Dmitry ZABROTSKY on 2019-01-17.
//

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : FragTrap(), NinjaTrap() {
	_hitPoints = FragTrap::HitPoints;
	_maxHitPoints = FragTrap::MaxHitPoints;
	_energyPoints = NinjaTrap::EnergyPoints;
	_maxEnergyPoints = NinjaTrap::MaxEnergyPoints;
	_level = 1;
	_name = "Supertrap";
	_meleeAttackDamage = NinjaTrap::MeleeAttackDamage;
	_rangedAttackDamage = FragTrap::RangedAttackDamage;
	_armorDamageReduction = FragTrap::ArmorDamageReduction;
	std::cout << _name << ": BOOM!! Perfect trap unit HERE!!!!" << std::endl;
}

SuperTrap::~SuperTrap() {
	std::cout << _name << ": Ignorance is fatal." << std::endl;
}

SuperTrap::SuperTrap(std::string const &name) : FragTrap(name), NinjaTrap(name) {
	_hitPoints = FragTrap::HitPoints;
	_maxHitPoints = FragTrap::MaxHitPoints;
	_energyPoints = NinjaTrap::EnergyPoints;
	_maxEnergyPoints = NinjaTrap::MaxEnergyPoints;
	_level = 1;
	this->_name = name;
	_meleeAttackDamage = NinjaTrap::MeleeAttackDamage;
	_rangedAttackDamage = FragTrap::RangedAttackDamage;
	_armorDamageReduction = FragTrap::ArmorDamageReduction;
	std::cout << _name << ": BOOM!! Perfect trap unit HERE!!!!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &obj) {
	if (!_name.empty())
		std::cout << _name << ": No technique is forbidden. Making shadow from " << obj._name << std::endl;
	else
		std::cout << "Making shadow from " << obj._name << std::endl;
	*this = obj;
}

SuperTrap &SuperTrap::operator = (const SuperTrap &obj) {
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

void		SuperTrap::rangedAttack(std::string const & target) {
	FragTrap::rangedAttack(target);
}

void		SuperTrap::meleeAttack(std::string const & target) {
	NinjaTrap::meleeAttack(target);
}