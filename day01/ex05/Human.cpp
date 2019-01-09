//
// Created by Dmitry ZABROTSKY on 2019-01-09.
//

#include "Human.hpp"

Human::Human()
{
	std::cout << "Awesome human here!\n";
}

Human::~Human()
{
	std::cout << "Human is gone!\n";
}

Brain const &Human::getBrain() const
{
	return(human_brain);
}

std::string Human::identify() const
{
	return (human_brain.identify());
}