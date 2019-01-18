//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#include "Character.hpp"

Character::Character() {

}

Character::Character(std::string const &name) : _name(name), _ap(40), _weapon(NULL) {

}

Character::Character(Character const &obj) {
	*this = obj;
}

Character::~Character() {

}

void Character::recoverAP() {
	if (_ap <= 30)
		_ap += 10;
}

void Character::equip(AWeapon *weapon) {
	_weapon = weapon;
}

void Character::attack(Enemy *enemy) {
	if (!_ap || _ap < _weapon->getAPCost())
		return ;
	std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
	_ap -= _weapon->getAPCost();
}

std::string const Character::getName() const {
	return (this->_name);
}

int Character::getAP() const {
	return (this->_ap);
}

AWeapon *Character::getWeapon() const {
	return (_weapon);
}

void Character::setAP(int ap) {
	_ap = ap;
}

void Character::setName(std::string const name) {
	_name = name;
}

void Character::setWeapon(AWeapon *weapon) {
	_weapon = weapon;
}

Character &Character::operator=(Character const &obj) {
	setAP(obj.getAP());
	setName(obj.getName());
	setWeapon(obj.getWeapon());
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Character const &obj) {
	if (obj.getWeapon())
		os << obj.getName() << " has " << obj.getAP() << " AP and wields a " << obj.getWeapon()->getName() << std::endl;
	else
		os << obj.getName() << " has " << obj.getAP() << " AP and is unarmed" << std::endl;
	return os;
}
