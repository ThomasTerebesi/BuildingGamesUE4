#include <iostream>
#include <initializer_list>

int Sum(std::initializer_list<int> intList);

int main()
{
	auto list = { 1, 2, 3, 4 };

	std::cout << Sum(list) << std::endl;

	std::cin.get();

	return 0;
}

int Sum(std::initializer_list<int> intList)
{
	int result = 0;

	for (int number : intList)
		result += number;

	return result;
}
