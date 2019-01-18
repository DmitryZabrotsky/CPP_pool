//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim {

protected:
	std::string _name;

	Victim();

public:
	Victim(std::string const name);
	Victim(Victim const & obj);
	~Victim();

	Victim & operator = (Victim const & obj);

	std::string getName() const;

	void getPolymorphed() const;
};

std::ostream & operator << (std::ostream &os, Victim const & obj);

#endif
