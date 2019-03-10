#include <iostream>

int main()
{
	int x = 5;
	int y = 4;

	std::cout << "Is 'x' equal to 'y'? C++ says: " << std::boolalpha << (x == y) << std::endl;
	std::cout << std::endl;


	bool isHungry = false;

	if (isHungry == true)
	{
		std::cout << "Preparing snack..." << std::endl;
		std::cout << "Eating..." << std::endl;
	}
	else
	{
		std::cout << "I am not hungry." << std::endl;
	}

	std::cout << "Sitting on the couch..." << std::endl;
	std::cout << std::endl;


	int alpha = 9;
	int beta = 13;

	std::cout << "Is 'alpha' equal to 'beta'? C++ says: " << (alpha = beta) << std::endl;	// Demonstration of how the value of alpha is overwritten.
	std::cout << "'alpha' = " << alpha << std::endl;
	std::cout << "'beta' = " << beta << std::endl;
	std::cout << std::endl;

	std::cout << "x = " << x << ", y = " << y << std::endl;
	std::cout << "Is 'x' greater than 'y'? C++ says: " << (x > y) << std::endl;
	std::cout << "Is 'x' greater than or equal to 'y'? C++ says: " << (x >= y) << std::endl;
	std::cout << "Is 'x' less than 'y'? C++ says: " << (x < y) << std::endl;
	std::cout << "Is 'x' less than or equal to 'y'? C++ says: " << (x <= y) << std::endl;
	std::cout << "Is 'x' not equal to 'y'? C++ says: " << (x != y) << std::endl;


	std::cin.get();

	return 0;
}