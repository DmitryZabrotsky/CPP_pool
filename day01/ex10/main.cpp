//
// Created by Dmitry ZABROTSKY on 2019-01-10.
//

#include <iostream>
#include <fstream>

void read_file(int ac, char** av)
{

	for (int i = 1; i < ac; i++)
	{
		std::string file (av[i]);

		std::ifstream stream (file);

		if (!stream.is_open())
			std::cout << av[0] << " " << av[i] << ": No such file or directory" << std::endl;
		else
		{
			std::string buff;

			while (std::getline(stream, buff))
			{
				std::cout << buff;
				if (!stream.eof())
					std::cout << "\n";
			}
			stream.close();
		}
	}
}

void read_console()
{
	std::string buff;

	while (std::getline(std::cin, buff))
		std::cout << buff << std::endl;
}

int main(int ac, char **av)
{
	if (ac > 1)
		read_file(ac, av);
	else
		read_console();
	return 0;
}