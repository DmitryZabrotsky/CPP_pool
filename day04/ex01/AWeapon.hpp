//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {

private:
	std::string _name;
	int 		_damage;
	int 		_apcost;

public:
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & obj);
	virtual ~AWeapon();
	AWeapon &operator = (AWeapon const &obj);

	std::string const	getName() const;
	int 				getAPCost() const;
	int 				getDamage() const;

	void				setName(std::string const name);
	void				setApcost(int val);
	void				setDamage(int val);

	virtual void attack() const = 0;

};

#endif
