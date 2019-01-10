//
// Created by Dmitry ZABROTSKY on 2019-01-10.
//

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>

class Human {

private:
	void meleeAttack(std::string const & target);
	void rangedAttack(std::string const & target);
	void intimidatingShout(std::string const & target);

public:
	void action(std::string const & action_name, std::string const & target);
};


#endif
