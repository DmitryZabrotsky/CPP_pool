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
		std::string word2 (av[3]);
		std::string buff;

		if (word.empty() || word2.empty())
			err("EMPTY string!");

		while (std::getline(input_file, buff))
		{
			// replacing words in stirng
			while (buff.find(word) != std::string::npos)
				buff.replace(buff.find(word), word.length(), word2);

			// writing string in target file
			output_file << buff;
			if (!input_file.eof())
				output_file << "\n";
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