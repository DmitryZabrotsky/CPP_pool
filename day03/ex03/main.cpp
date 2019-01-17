//
// Created by Dmitry ZABROTSKY on 2019-01-16.
//
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	ClapTrap Clap;
	FragTrap Frag;
	ScavTrap Scav;
	NinjaTrap Zed("Zed");
	NinjaTrap Shen("Shen");

	Zed.ninjaShoebox(Clap);
	Zed.ninjaShoebox(Frag);
	Zed.ninjaShoebox(Scav);
	Zed.ninjaShoebox(Shen);

	return (0);
}