//
// Created by Dmitry ZABROTSKY on 2019-01-16.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
	FragTrap(); 									//default
	FragTrap(std::string const & name);
	FragTrap(const FragTrap &obj); 					// copy
	~FragTrap();

	FragTrap& operator = (const FragTrap& other); 	// =

	void vaulthunter_dot_exe(std::string const & target);
};


#endif
