#include <iostream>

int main()
{
	int x = 1;

	do
	{
		std::cout << "x is " << x << std::endl;
		x++;
	} while (x <= 5);

	std::cout << "End of loop." << std::endl;


	// Difference between while loop and do while loop illustrated:
	int val = 5;

	while (val < 5)
	{
		std::cout << "This will not print." << std::endl;
	}

	do
	{
		std::cout << "This will print once." << std::endl;
	} while (val < 5);


	std::cin.get();

	return 0;
}