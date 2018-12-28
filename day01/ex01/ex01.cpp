//
// Created by Dmitry ZABROTSKY on 12/25/18.
//

#include <iostream>

void	memoryLeak()
{
	std::string*		panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}