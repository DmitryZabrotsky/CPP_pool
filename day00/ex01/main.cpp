//
// Created by Dmitry ZABROTSKY on 12/12/18.
//

#include "Phonebook.hpp"

int main(void)
{
	Phonebook 	phonebook;
	std::string command;

	while (command != "EXIT")
	{
		std::cout << "Enter command: ";
		if (!std::getline(std::cin, command))
			return (1);
		if (command == "ADD")
			phonebook.Add();
		else if (command == "SEARCH")
			phonebook.Search();
	}
	return (0);
}