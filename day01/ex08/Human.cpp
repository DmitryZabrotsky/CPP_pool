//
// Created by Dmitry ZABROTSKY on 2019-01-10.
//

#include "Human.hpp"

void Human::meleeAttack(std::string const &target) {
	std::cout << "meelee attack to " << target << std::endl;
}

void Human::rangedAttack(std::string const &target) {
	std::cout << "ranged attack to " << target << std::endl;
}

void Human::intimidatingShout(std::string const &target) {
	std::cout << "intimidating shout to " << target << std::endl;
}

void Human::action(std::string const &action_name, std::string const &target) {

	std::string arr[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	void (Human::* ptr[])(std::string const &target) =
			{&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	for (int i = 0; i < 3; i++)
	{
		if (!action_name.compare(arr[i]))
			(this->*(ptr[i]))(target);
	}
}
