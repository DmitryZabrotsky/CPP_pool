//
// Created by Dmitry ZABROTSKY on 2019-01-17.
//

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap {

public:
	NinjaTrap();
	NinjaTrap(std::string const & name);
	NinjaTrap(const NinjaTrap & obj);
	~NinjaTrap();

	NinjaTrap & operator = (const NinjaTrap & obj);

	void ninjaShoebox(const ClapTrap &obj);
	void ninjaShoebox(const FragTrap &obj);
	void ninjaShoebox(const ScavTrap &obj);
	void ninjaShoebox(const NinjaTrap &obj);

};


#endif
