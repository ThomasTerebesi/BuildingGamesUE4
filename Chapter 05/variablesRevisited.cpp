#include <iostream>
#include <string>

std::string gString;

void AddA() { gString += 'A'; };
void AddB() { gString += 'B'; };
void AddC() { gString += 'C'; };

void StaticTestFunc()
{
	static int runCount = 0;
	std::cout << "Ran this function " << ++runCount << " times." << std::endl;
}

int main()
{
	AddA();
	AddB();

	std::cout << gString << std::endl;

	AddC();

	std::cout << gString << std::endl << std::endl;

	for (int i = 0; i < 4; i++)
		StaticTestFunc();

	std::cin.get();

	return 0;
}