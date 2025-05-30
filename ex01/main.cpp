#include "iter.hpp"
#include <iostream>

template <typename T> void print(T const &x)
{
	std::cout << x << std::endl;
}

int	main(void)
{
	int	intArray[] = {1, 2, 3, 4, 5};

	std::string strArray[] = {"Hello", "World", "42"};
	std::cout << "Testing with int array:" << std::endl;
	iter(intArray, 5, print);
	std::cout << "\nTesting with string array:" << std::endl;
	iter(strArray, 3, print);
	return (0);
}
