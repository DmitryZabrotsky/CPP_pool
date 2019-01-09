//
// Created by Dmitry ZABROTSKY on 2019-01-09.
//

#include "Human.hpp"

int main(void)
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return 0;
}