//
// Created by Dmitry ZABROTSKY on 2019-01-09.
//

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human {

private:
	const Brain human_brain;

public:
	Human();
	~Human();

	Brain 		const &getBrain() const;
	std::string identify() const;

};


#endif
