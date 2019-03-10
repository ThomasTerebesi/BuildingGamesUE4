#include <iostream>

int main()
{
	int x = 1;

	while (x <= 5)
	{
		std::cout << "'x' equals " << x << "." << std::endl;
		x++;
	}

	std::cout << std::endl;


	x = 1;

	while (x <= 10)
	{
		std::cout << x << "\t";
		x++;
	}
	
	std::cout << std::endl;


	x = 10;

	while (x >= 1)
	{
		std::cout << x << "\t";
		x--;
	}

	std::cout << std::endl;


	x = 2;

	while (x <= 20)
	{
		std::cout << x << "\t";
		x += 2;
	}

	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << "Square values:" << std::endl;

	x = 1;

	while (x <= 16)
	{
		std::cout << x << ", " << x * x << "\t\t";
		if (x % 2 == 0)
			std::cout << std::endl;
		x++;
	}


	std::cin.get();

	return 0;
}