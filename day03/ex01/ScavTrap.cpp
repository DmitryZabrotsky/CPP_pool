//
// Created by Dmitry ZABROTSKY on 2019-01-16.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = "Claptrap";
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

ScavTrap::ScavTrap(std::string const &name) : _name(name) {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << _name << ": Directive one: Destroy humanity!";
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

void ScavTrap::rangedAttack(std::string const &target) {
	std::cout << "SC4V-TP " << _name << " trying to deal damage ";
	std::cout << target << " at range, finaly causing " << _rangedAttackDamage;
	std::cout << " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) {
	std::cout << "SC4V-TP " << _name << " trying to deal damage ";
	std::cout << target << " face to face, finaly causing " << _meleeAttackDamage;
	std::cout << " points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	int dmg = amount - this->_armorDamageReduction;
	if (dmg <= 0)
		std::cout << this->_name << ": U are mised." << std::endl;
	else
	{
		int hp = this->_hitPoints - dmg;
		if (hp <= 0)
		{
			std::cout << "* BOOM *" << std::endl;
			this->_hitPoints = 0;
		}
		else
			this->_hitPoints = hp;
		std::cout << this->_name << " have " << _hitPoints;
		std::cout << " HP after taking " << amount << " damage." << std::endl;
	}

}

void ScavTrap::beRepaired(unsigned int amount) {
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
	{
		this->_hitPoints = this->_maxHitPoints;
		std::cout << this->_name << ": Repaired full HP." << std::endl;
	}
	else
		std::cout << this->_name << ": Repaired " << amount << " HP." << std::endl;
	std::cout << this->_name << " have " << _hitPoints;
	std::cout << " after repaire " << amount << " HP." << std::endl;
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
