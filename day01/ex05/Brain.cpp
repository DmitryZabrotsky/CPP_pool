//
// Created by Dmitry ZABROTSKY on 2019-01-09.
//

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Fresh brain here!!\n";
}

Brain::~Brain()
{
	std::cout << "Brain is gone :/\n";
}

std::string Brain::identify() const
{
	std::stringstream ss;
	ss << this;
	return (ss.str());
}
