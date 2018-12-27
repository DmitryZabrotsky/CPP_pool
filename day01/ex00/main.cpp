//
// Created by Dmitry ZABROTSKY on 12/25/18.
//

#include "Pony.hpp"

void ponyOnTheHeap(std::string name)
{
	Pony *pony = new Pony(name);
	std::cout << " in the heap" << std::endl;
	pony->feedPony(0);
	pony->feedPony(42);
	pony->feedPony(8);	
	delete pony; 
};

void ponyOnTheStack(std::string name)
{
	Pony pony = Pony(name);
	std::cout << " in the stack" << std::endl;
	pony.feedPony(0);
	pony.feedPony(42);
	pony.feedPony(8);
};

int	main(void)
{
	ponyOnTheHeap("Jose");
	ponyOnTheStack("Joe");
	return 0;
}