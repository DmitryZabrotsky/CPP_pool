//
// Created by Dmitry ZABROTSKY on 12/12/18.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <sstream>

class Phonebook
{
	private:
		Contact contacts[8];
		int		index;

	public:
		Phonebook();
		void	Add(void);
		void	Search(void);
};

#endif