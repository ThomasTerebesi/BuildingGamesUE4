#include <iostream>

int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << i << "\t";

	std::cout << std::endl << std::endl;


	for (int i = 6; i <= 30; i += 6)
		std::cout << i << "\t";

	std::cout << std::endl << std::endl;


	for (int i = 2; i <= 100; i += 2)
		std::cout << i << "\t";

	std::cout << std::endl << std::endl;


	for (int i = 1; i <= 16; i++)
		std::cout << i << ", " << i * i << std::endl;

	std::cout << std::endl << std::endl;


	std::cin.get();

	return 0;
}