//
// Created by Dmitry ZABROTSKY on 2019-01-16.
//
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap Jacks;
	Jacks.meleeAttack("wall of wind");
	Jacks.rangedAttack("bunch of grass");
	Jacks.takeDamage(50);
	Jacks.takeDamage(50);
	Jacks.takeDamage(5);
	Jacks.beRepaired(5);
	Jacks.takeDamage(20);

	std::cout << std::endl;
	std::cout << std::endl;

	FragTrap Random(Jacks);
	Random.beRepaired(50);

	std::cout << std::endl;
	std::cout << std::endl;

	FragTrap Yellow("Yellow bunch of trash");
	Yellow = Random;
	Yellow.beRepaired(0);
	Yellow.beRepaired(200);

	Yellow.vaulthunter_dot_exe("random dude in the desert ..");
	Yellow.vaulthunter_dot_exe("random worm in the desert ..");
	Yellow.vaulthunter_dot_exe("random eagle in the desert ..");
	Yellow.vaulthunter_dot_exe("random metal trash in the desert ..");
	Yellow.vaulthunter_dot_exe("random dumb stranger in the desert ..");
	Yellow.vaulthunter_dot_exe("in the air!");

	std::cout << std::endl;
	std::cout << std::endl;

	ScavTrap defoultScavTrap;
	ScavTrap Jackson("IVAN");
	Jackson.meleeAttack("wall of bricks");
	Jackson.rangedAttack("grown");
	Jackson.takeDamage(50);
	Jackson.takeDamage(50);
	Jackson.takeDamage(5);
	Jackson.beRepaired(5);
	Jackson.takeDamage(20);

	std::cout << std::endl;
	std::cout << std::endl;

	ScavTrap Rand(Jackson);
	Rand.beRepaired(50);

	std::cout << std::endl;
	std::cout << std::endl;

	ScavTrap Red("Red bunch of trash");
	Red = Rand;
	Red.beRepaired(0);
	Red.beRepaired(200);

	Red.challengeNewcomer("dude");
	Red.challengeNewcomer("worm");
	Red.challengeNewcomer("eagle");
	Red.challengeNewcomer("trash");
	Red.challengeNewcomer("dumb stranger");
	Red.challengeNewcomer("some unnamed person");

	return (0);
}