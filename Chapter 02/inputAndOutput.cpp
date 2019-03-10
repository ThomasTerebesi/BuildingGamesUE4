#include <iostream>
#include <string>

int main()
{
	char character = 'A';
	int integer = 1;
	std::string string = "Hello";

	printf("Integer: %d. Character: %c.\n", integer, character);
	printf("String: %s.\n", string.c_str());

	std::string userName = "";
	int age = 0;

	std::cout << "\nEnter your name: ";
	std::cin >> userName;

	std::cout << "Enter your age: ";
	std::cin >> age;

	printf("\nHello, %s. You are %d years old.", userName.c_str(), age);

	std::cin.get();
	std::cin.get();

	return 0;
}