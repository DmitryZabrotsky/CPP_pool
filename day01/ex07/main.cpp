//
// Created by Dmitry ZABROTSKY on 2019-01-10.
//

#include <iostream>
#include <fstream>
#include <string>

void err(std::string str)
{
	std::cout << str << std::endl;
	exit(1);
}

void replacer(char** av)
{
	std::string file (av[1]);
	file += ".replace";

	std::ifstream input_file (av[1]);
	std::ofstream output_file (file);

	if (!input_file.is_open() || !output_file.is_open())
		err("File ERROR!");
	else
	{
		std::string word (av[2]);
		std::string buff;

		while (std::getline(input_file, buff))
		{
			while (buff.find(word) != std::string::npos)
				buff.replace(buff.find(word), word.length(), av[3]);
			output_file << buff << "\n";
		}

		input_file.close();
		output_file.close();
	}
}

int main(int ac, char** av)
{
	if (ac != 4)
		err("Usage: ./replace filename string_1 string_2");
	else
		replacer(av);
	return 0;
}