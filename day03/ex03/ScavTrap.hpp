//
// Created by Dmitry ZABROTSKY on 2019-01-16.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap(); 									//default
	ScavTrap(std::string const & name);
	ScavTrap(const ScavTrap &obj); 					// copy
	~ScavTrap();

	ScavTrap& operator = (const ScavTrap& other); 	// =

	void challengeNewcomer(std::string const & target);
};


#endif