#include <array>
#include <list>
#include <vector>
#include <iostream>
#include "easyfind.hpp"

int main() {

	std::array<int, 5> arr = {1,2,3,4,5};
	std::cout << std::endl;
	std::cout << (easyfind(arr, 4) ? "exist" : "not exist") << std::endl;
	std::cout << (easyfind(arr, 42) ? "exist" : "not exist") << std::endl;

	std::list<int> list;
	for (int i = 1; i < 6; i++) {
		list.push_back(i);
	}
	std::cout << std::endl;
	std::cout << (easyfind(list, 4) ? "exist" : "not exist") << std::endl;
	std::cout << (easyfind(list, 42) ? "exist" : "not exist") << std::endl;

	std::vector<int> vector;
	for (int i = 1; i < 6; i++){
		vector.push_back(i);
	}
	std::cout << std::endl;
	std::cout << (easyfind(vector, 4) ? "exist" : "not exist") << std::endl;
	std::cout << (easyfind(vector, 42) ? "exist" : "not exist") << std::endl;

	return  0;
}