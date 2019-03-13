#include <iostream>
#include "prototypes.h"

int main()
{
	std::cout << std::boolalpha << IsPositive(4) << std::endl;
	std::cout << AbsEqual(4, -4) << std::endl;

	std::cin.get();

	return 0;
}
