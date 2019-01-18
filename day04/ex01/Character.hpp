//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

private:
	std::string _name;
	int _ap;
	AWeapon *_weapon;

public:
	Character();
	Character(std::string const & name);
	Character(Character const &obj);
	~Character();

	void recoverAP();
	void equip(AWeapon* weapon);
	void attack(Enemy* enemy);

	std::string const getName() const;
	int getAP() const;
	AWeapon *getWeapon() const;

	void setAP(int ap);
	void setName(std::string const name);
	void setWeapon(AWeapon *weapon);

	Character & operator = ( Character const &obj);
};

std::ostream & operator << ( std::ostream &os, Character const &obj);

#endif
