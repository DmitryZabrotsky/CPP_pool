//
// Created by Dmitry ZABROTSKY on 12/12/18.
//

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "\n\tCommands to use:\n";
	std::cout << "\tADD - adding new contact\n";
	std::cout << "\tSEARCH - search contact in phonebook\n";
	std::cout << "\tEXIT - quit\n\n";
	index = 0;
}

void Phonebook::Add(void)
{
	if (index == 8)
	{
		std::cout << "Phonebook is full! U can`t ADD any more contacts.\n";
		std::cout << "Use SEARCH or EXIT.\n";
	}
	else
	{
		contacts[index].FillContact();
		index++;
	}
}

void Phonebook::Search(void)
{
	int i;
	int idx;
	std::string s;
	std::stringstream ss;

	if (index == 0)
	{
		std::cout << "Contacts are empty.\n";
		return ;
	}
	std::cout << "--------------------------------------------\n";
	std::cout << "     index|first name| last name|  nickname|\n";
	std::cout << "--------------------------------------------\n";
	
	i = 0;
	while (i < index)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		contacts[i].PrintForSearch();
		i++;
	}
	std::cout << "Enter contact index for details: ";
	std::getline(std::cin, s);
	ss << s;
	ss >> idx;
	if (idx >= 1 && idx <= index)
		contacts[idx - 1].PrintContact();
	else
	{
		std::cout << "Wrong index.\n";
		return ;
	}
}