//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#include "AWeapon.hpp"

AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) {
	_name = name;
	_apcost = apcost;
	_damage = damage;
}

AWeapon::AWeapon(AWeapon const &obj) {
	*this = obj;
}

AWeapon &AWeapon::operator = (AWeapon const &obj) {
	this->_name = obj._name;
	this->_apcost = obj._apcost;
	this->_damage = obj._damage;
	return (*this);
}

AWeapon::~AWeapon() {}

std::string const AWeapon::getName() const {return (this->_name);}
int AWeapon::getAPCost() const {return (this->_apcost);}
int AWeapon::getDamage() const {return (this->_damage);}

void AWeapon::setName(std::string const name) {this->_name = name;}
void AWeapon::setApcost(int val) {this->_apcost = val;}
void AWeapon::setDamage(int val) {this->_damage = val;}
