//
// Created by Dmitry ZABROTSKY on 12/12/18.
//

#include "Contact.hpp"

void intro(void)
{
	std::cout << "\n\tCommands to use:\n";
	std::cout << "\tADD - adding new contact\n";
	std::cout << "\tSEARCH - search contact in phonebook\n";
	std::cout << "\tEXIT - quit\n\n";
}

int main(void)
{
	std::string command;

	intro();
	while (command != "EXIT")
	{
		if (command == "ADD")
		{
//			handle_add();
		}
		else if (command == "SEARCH")
		{
//			handle_search();
		}
		else
		{
			std::cout << "Enter one of the following command: ADD, SEARCH, EXIT\n";
			std::getline(std::cin, command);
			std::cout << command << std::endl;
		}
	}
	return (0);
}