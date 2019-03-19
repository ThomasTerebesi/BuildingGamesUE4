#include <iostream>

int main()
{
	std::cout << "Enter the size of the array: ";

	int size;

	std::cin >> size;

	int * array = (int*)malloc(size * sizeof(int));	// C-style

	for (int i = 0; i < size; i++)
	{
		array[i] = i * 2;
		std::cout << array[i] << std::endl;
	}

	free(array);									// C-style


	std::cin.get();
	std::cin.get();

	return 0;
}