#include <iostream>
#include <typeinfo>

template <typename T>
void iter(T *arr, unsigned int len, void(*f)(T))
{
	for (unsigned int i = 0; i < len; ++i) {
		f(arr[i]);
	}
}

template <typename T>
void print_with_type(T var)
{
	std::cout << typeid(var).name() << " " << var << std::endl;
}

int main()
{
	int iarr[] = {0,1,2,3,4};
	iter(iarr, 5, ::print_with_type);

	double darr[] = {4.2, 42.2, 0.42, 42.42, 2.42};
	iter(darr, 5, ::print_with_type);

	std::string sarr[] = {"foxes", "foxes", "foxes", "foxes", "foxes"};
	iter(sarr, 5, ::print_with_type);
}
