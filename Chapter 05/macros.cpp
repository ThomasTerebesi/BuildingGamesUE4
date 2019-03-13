#include <iostream>

#define PI 3.14159

#define println(X) std::cout << X << std::endl;

constexpr double pi2 = 3.14159;

inline int GreaterValue(int a, int b);

constexpr int Increment(int i)
{
	return i + 1;
}

int main()
{
	short r = 4;

	std::cout << "Circumference is " << Increment(1) * PI * r << std::endl;

	std::cout << "Circumference is " << Increment(1) * pi2 * r << std::endl;

	std::cout << std::endl;

	println("Hello there!");

	std::cout << std::endl;

	std::cout << "The greater value of 1231 and 9253 is " << GreaterValue(1231, 9253) << "." << std::endl;

	std::cin.get();

	return 0;
}

inline int GreaterValue(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
