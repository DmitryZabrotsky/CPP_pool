#include <iostream>
#include <typeinfo>
#include <iomanip>

void convert(char *str) {
	std::string string = str;

	try
	{
		int i = static_cast<int>(std::stoi(str));
		if (i >= 32 && i <= 126)
		{
			std::cout << "char: " << static_cast<char>(i) << std::endl;
		}
		else
		{
			std::cout << "char: Non displayable" << std::endl;
		}
		std::cout << "int: " << i << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	try
	{
		float f = static_cast<float>(std::stof(str));
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << typeid(f).name() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "float: impossible" << std::endl;
	}
	try
	{
		double d = static_cast<double>(std::stod(str));
		std::cout << "double: " << d << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "double: impossible" << std::endl;
	}
};

int main(int ac, char **av) {
	if(ac == 2) {
		convert(av[1]);
	}
	else {
		std::cout << "Wrong arguments!" << std::endl;
		std::cout << "Usage: ./convert \"num\"" << std::endl;
		return 1;
	}
}