//
// Created by Dmitry ZABROTSKY on 12/12/18.
//

#include "Contact.hpp"

void Contact::FillContact(void)
{
	std::cout << "Enter first name: ";
	std::getline(std::cin, first_name);	
	std::cout << "\nEnter last name: ";
	std::getline(std::cin, last_name);
	std::cout << "\nEnter nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "\nEnter login: ";
	std::getline(std::cin, login);
	std::cout << "\nEnter postal address: ";
	std::getline(std::cin, postal_address);
	std::cout << "\nEnter email address: ";
	std::getline(std::cin, email_address);
	std::cout << "\nEnter phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "\nEnter birthday date: ";
	std::getline(std::cin, birthday_date);
	std::cout << "\nEnter favorite meal: ";
	std::getline(std::cin, favorite_meal);
	std::cout << "\nEnter underwear color: ";
	std::getline(std::cin, underwear_color);
	std::cout << "\nEnter darkest secret: ";
	std::getline(std::cin, darkest_secret);
	std::cout << "\n";
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