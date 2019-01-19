//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine {

public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &obj);
	AssaultTerminator &operator = (AssaultTerminator const &obj);

	virtual ~AssaultTerminator();
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};


#endif
