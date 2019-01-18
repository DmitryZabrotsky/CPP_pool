//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#ifndef PEON_HPP
#define PEON_HPP


#include "Victim.hpp"

class Peon : public Victim {

protected:
	Peon();

public:
	Peon(std::string const name);
	Peon(Peon const & obj);
	~Peon();

	Peon & operator = (Peon const & obj);

	std::string getName() const;

	void getPolymorphed() const;

};

std::ostream & operator << (std::ostream &os, Victim const & obj);

#endif
