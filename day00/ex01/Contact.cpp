//
// Created by Dmitry ZABROTSKY on 12/12/18.
//

#include "Contact.hpp"

void Contact::FillContact(int i)
{
	index = i;
	std::cout << "Enter first name: ";
	std::getline(std::cin, first_name);	
	std::cout << "Enter last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter login: ";
	std::getline(std::cin, login);
	std::cout << "Enter postal address: ";
	std::getline(std::cin, postal_address);
	std::cout << "Enter email address: ";
	std::getline(std::cin, email_address);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Enter birthday date: ";
	std::getline(std::cin, birthday_date);
	std::cout << "Enter favorite meal: ";
	std::getline(std::cin, favorite_meal);
	std::cout << "Enter underwear color: ";
	std::getline(std::cin, underwear_color);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkest_secret);
}

void Contact::PrintForSearch(void)
{
	if (index > 0)
	{
		std::cout << index << std::endl;
		std::cout << first_name << std::endl;
		std::cout << last_name << std::endl;
		std::cout << nickname << std::endl;
	}
}

void Contact::PrintContact(void)
{
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nickname << std::endl;
	std::cout << login << std::endl;
	std::cout << postal_address << std::endl;
	std::cout << email_address << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << birthday_date << std::endl;
	std::cout << favorite_meal << std::endl;
	std::cout << underwear_color << std::endl;
	std::cout << darkest_secret << std::endl;
}