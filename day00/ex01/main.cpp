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
	int i;
	std::string command;
	Contact contacts[8];

	intro();
	while (command != "EXIT")
	{
		i = 0;
		if (command == "ADD" && i <= 8)
		{
			contacts[i].FillContact();
			i++;
			command = "";
		}
		else if (command == "SEARCH")
		{
			contacts[i].PrintContact();
			command = "";
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