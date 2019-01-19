//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine {

public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &obj);
	TacticalMarine &operator = (TacticalMarine const &obj);

	virtual ~TacticalMarine();
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;

};


#endif
