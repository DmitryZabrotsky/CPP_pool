//
// Created by Dmitry ZABROTSKY on 2019-01-16.
//

#include "FragTrap.hpp"

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

	FragTrap Random(Jacks);
	Random.beRepaired(50);

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

	return (0);
}