//
// Created by Dmitry ZABROTSKY on 2019-01-16.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = "Claptrap";
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

FragTrap::FragTrap(std::string const &name) : _name(name) {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
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

void FragTrap::rangedAttack(std::string const &target) {
	std::cout << "FR4G-TP " << _name << " attacks ";
	std::cout << target << " at range, causing " << _rangedAttackDamage;
	std::cout << " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) {
	std::cout << "FR4G-TP " << _name << " attacks ";
	std::cout << target << " face to face, causing " << _meleeAttackDamage;
	std::cout << " points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
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

void FragTrap::beRepaired(unsigned int amount) {
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
