#include <iostream>
#include "Base.hpp"
#include "C.hpp"
#include "B.hpp"
#include "A.hpp"

Base * randomclass()
{
	int	i = (rand() % 3);
	if (i == 0) {
		std::cout << "C created" << std::endl;
		return  new C();
	}
	else if (i == 1) {
		std::cout << "B created" << std::endl;
		return  new B();
	}
	else if (i == 2) {
		std::cout << "A created" << std::endl;
		return  new A();
	}
	else
		return (NULL);
}

void	identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p) != NULL) {
		std::cout << "A from pointer" << std::endl;
	}
	else if (dynamic_cast<B *>(p) != NULL) {
		std::cout << "B from pointer" << std::endl;
	}
	else if (dynamic_cast<C *>(p) != NULL) {
		std::cout << "C from pointer" << std::endl;
	}
}

void	identify_from_reference(Base &p)
{
	if (dynamic_cast<A *>(&p) != NULL) {
		std::cout << "A from reference" << std::endl;
	}
	else if (dynamic_cast<B *>(&p) != NULL) {
		std::cout << "B from reference" << std::endl;
	}
	else if (dynamic_cast<C *>(&p) != NULL) {
		std::cout << "C from reference" << std::endl;
	}
}

int	main(void)
{
	srand(time(NULL));
	Base *some = randomclass();
	identify_from_pointer(some);
	identify_from_reference(*some);
	return (0);
}