//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {

private:
	std::string _name;
	std::string _title;

	Sorcerer(void);

public:
	Sorcerer(std::string const name, std::string const title);
	Sorcerer(Sorcerer const & obj);
	Sorcerer & operator = (Sorcerer const & obj);
	~Sorcerer();

	std::string getName() const;
	std::string getTitle() const;

	void polymorph(Victim const & obj) const;
};

std::ostream & operator << (std::ostream &os, Sorcerer const & obj);

#endif
