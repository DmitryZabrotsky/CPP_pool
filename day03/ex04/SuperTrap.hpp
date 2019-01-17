//
// Created by Dmitry ZABROTSKY on 2019-01-17.
//

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

public:
	SuperTrap();
	SuperTrap(std::string const & name);
	SuperTrap(const SuperTrap & obj);
	~SuperTrap();

	SuperTrap & operator = (const SuperTrap & obj);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
};


#endif
