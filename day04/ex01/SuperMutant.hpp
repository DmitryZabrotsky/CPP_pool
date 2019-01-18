//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {

public:
	SuperMutant();
	SuperMutant(SuperMutant const &obj);
	~SuperMutant();

	virtual void takeDamage(int damage);

	SuperMutant & operator = (SuperMutant const &obj);
};


#endif
