//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &obj);
	~PlasmaRifle();

	PlasmaRifle &operator = (PlasmaRifle const &obj);

	virtual void attack() const;
};


#endif
