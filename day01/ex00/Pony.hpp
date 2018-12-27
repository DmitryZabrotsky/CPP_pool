//
// Created by Dmitry ZABROTSKY on 12/25/18.
//

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony
{

private:
	std::string name;

public:
	Pony(std::string name);
	~Pony();

	void feedPony(int food);
};

#endif