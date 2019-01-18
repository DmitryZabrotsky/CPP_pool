//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy {

private:
	int _hp;
	std::string _type;

public:
	Enemy();
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &obj);
	virtual ~Enemy();

	std::string const getType() const;
	int getHP() const;

	void setType(std::string const type);
	void setHP(int hp);

	virtual void takeDamage(int dmg);

	Enemy &operator = (Enemy const &obj);

};


#endif
