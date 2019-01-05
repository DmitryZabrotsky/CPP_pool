//
// Created by Dmitry ZABROTSKY on 12/25/18.
//

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "ptr: " << *ptr << "\n";
	std::cout << "ref: " << ref << "\n";

	return 0;
}