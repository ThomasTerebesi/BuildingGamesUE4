#include <iostream>

int main()
{
	/*
	std::cout << "Enter the size of the array: ";
	
	int size;
	std::cin >> size;

	int array[size];
	*/


	std::cout << "Enter the size of the array: ";

	int size;
	std::cin >> size;

	int * array = new int[size];

	for (int i = 0; i < size; i++)
	{
		array[i] = i * 2;
		std::cout << array[i] << std::endl;
	}

	delete[] array;


	std::cin.get();
	std::cin.get();

	return 0;
}