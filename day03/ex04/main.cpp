//
// Created by Dmitry ZABROTSKY on 2019-01-16.
//
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	SuperTrap Super("KABINA");

	std::cout << Super.getName() << std::endl;
	std::cout << Super.getHitPoints() << std::endl;
	std::cout << Super.getMaxHitPoints() << std::endl;
	std::cout << Super.getEnergyPoints() << std::endl;
	std::cout << Super.getMaxEnergyPoints() << std::endl;
	std::cout << Super.getLevel() << std::endl;
	std::cout << Super.getMeleeAttackDamage() << std::endl;
	std::cout << Super.getRangedAttackDamage() << std::endl;
	std::cout << Super.getArmorDamageReduction() << std::endl;

	Super.meleeAttack("Stolb");
	Super.rangedAttack("Stolb");
	return (0);
}