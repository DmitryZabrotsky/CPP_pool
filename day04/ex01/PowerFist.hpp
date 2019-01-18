//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:
	PowerFist();
	PowerFist(PowerFist const &obj);
	~PowerFist();

	PowerFist &operator = (PowerFist const &obj);

	virtual void attack() const;
};


#endif
