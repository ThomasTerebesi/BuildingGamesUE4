#include <iostream>
#include <string>

int main()
{
	int array[5];

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;

	for (int i = 0; i < 5; i++)
		std::cout << array[i] << std::endl;

	std::cout << std::endl;


	std::string names[5];

	names[0] = "Oliver";
	names[1] = "James";
	names[2] = "Dan";
	names[3] = "Samuel";
	names[4] = "Jack";

	for (int i = 0; i < 5; i++)
		std::cout << names[i] << std::endl;

	std::cout << std::endl;


	double temps[3];

	temps[0] = 11.6;
	temps[1] = 13.2;
	temps[2] = 11.1;

	for (int i = 0; i < 3; i++)
		std::cout << temps[i] << std::endl;


	std::cin.get();

	return 0;
}