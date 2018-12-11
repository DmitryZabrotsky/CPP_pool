//
// Created by Dmitry ZABROTSKY on 12/11/18.
//

#include <iostream>

int main(int ac, char* av[])
{
	int i;
	int j;
	char c;

	if (ac >= 2)
	{
		i = 1;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				c = av[i][j];
				if (c >= 'a' && c <= 'z')
					c = c - ' ';
				std::cout << c;
				j++;
			}
		i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}