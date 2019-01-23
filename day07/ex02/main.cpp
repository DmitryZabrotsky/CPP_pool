#include <iostream>
#include "Array.hpp"

int main()
{
	Array <std::string> array(5);
	array[0] = "fox";
	array[1] = "lynx";
	array[2] = "cat";
	array[3] = "lion";
	array[4] = "leopard";
	for (int i = 0; i < 5; ++i){
		std::cout << array[i] << std::endl;
	}

	try {
		std::cout << array[42] << std::endl;
	}
	catch (std::range_error &e){
		std::cout << "\n---> " << e.what() << std::endl;
	}
}