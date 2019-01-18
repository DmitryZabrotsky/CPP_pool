//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(int hp, std::string const &type) {
	_hp = hp;
	_type = type;
}

Enemy::~Enemy() {}

std::string const Enemy::getType() const {return (this->_type);}
int Enemy::getHP() const { return (this->_hp);}

void Enemy::setType(std::string const type) {this->_type = type;}
void Enemy::setHP(int hp) {this->_hp = hp;}

void Enemy::takeDamage(int dmg) {
	if (dmg >= 0){
		if (_hp < dmg)
			_hp = 0;
		else
			_hp -= dmg;
	}
}

Enemy &Enemy::operator=(Enemy const &obj) {
	this->_hp = obj._hp;
	this->_type = obj._type;
	return (*this);
}

Enemy::Enemy(Enemy const &obj) {
	*this = obj;
}
