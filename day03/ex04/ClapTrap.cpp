//
// Created by Dmitry ZABROTSKY on 2019-01-17.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = "Claptrap";
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << _name << ": ready for your wishes, Sir!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << _name << ": I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) : _name(name) {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << _name << ": ready for your wishes, Sir!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
	if (!_name.empty())
		std::cout << _name << ": Recompiling my combat code from " << obj._name << std::endl;
	else
		std::cout << "Compiling combat code from " << obj._name << std::endl;
	*this = obj;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &obj) {
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

void ClapTrap::rangedAttack(std::string const &target) {
	std::cout << "CL4P-TP " << _name << " attacks ";
	std::cout << target << " at range, causing " << _rangedAttackDamage;
	std::cout << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target) {
	std::cout << "CL4P-TP " << _name << " attacks ";
	std::cout << target << " face to face, causing " << _meleeAttackDamage;
	std::cout << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	int dmg = amount - this->_armorDamageReduction;
	if (dmg <= 0)
		std::cout << this->_name << ": Haha! So pure punch!! 0 dmg for me!" << std::endl;
	else
	{
		int hp = this->_hitPoints - dmg;
		if (hp <= 0)
		{
			std::cout << "Damn!! U beat me, I am done." << std::endl;
			this->_hitPoints = 0;
		}
		else
			this->_hitPoints = hp;
		std::cout << this->_name << " have " << _hitPoints;
		std::cout << " HP after taking " << amount << " damage." << std::endl;
	}

}

void ClapTrap::beRepaired(unsigned int amount) {
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
	{
		this->_hitPoints = this->_maxHitPoints;
		std::cout << this->_name << ": Restored full HP." << std::endl;
	}
	else
		std::cout << this->_name << ": Restored " << amount << " HP." << std::endl;
	std::cout << this->_name << " have " << _hitPoints;
	std::cout << " after restore " << amount << " HP." << std::endl;
}

std::string ClapTrap::getName() const {
	return (this->_name);
}

unsigned int ClapTrap::getHitPoints() const {
	return (this->_hitPoints);
};

unsigned int ClapTrap::getMaxHitPoints() const {
	return (this->_maxHitPoints);
};

unsigned int ClapTrap::getEnergyPoints() const {
	return (this->_energyPoints);
};

unsigned int ClapTrap::getMaxEnergyPoints() const {
	return (this->_maxEnergyPoints);
};

unsigned int ClapTrap::getLevel() const {
	return (this->_level);
};

unsigned int ClapTrap::getMeleeAttackDamage() const {
	return (this->_meleeAttackDamage);
};

unsigned int ClapTrap::getRangedAttackDamage() const {
	return (this->_rangedAttackDamage);
};

unsigned int ClapTrap::getArmorDamageReduction() const {
	return (this->_armorDamageReduction);
};
