#include <iostream>
#include <cmath>

void PrintRoadSingle()
{
	std::cout << "*   *" << std::endl;
	std::cout << "* | *" << std::endl;
	std::cout << "* | *" << std::endl;
	std::cout << "*   *" << std::endl;
}

void PrintRoadMulti(int numSegments)
{
	for (int i = 0; i < numSegments; i++)
		PrintRoadSingle();
}

int Sum(int a, int b)
{
	return a + b;
}

bool IsPositive(double number);				// defined below

bool AbsEqual(int a, int b)
{
	if (a < 0)
		a *= -1;

	if (b < 0)
		b *= -1;

	return a == b;
}

char GetGrade(int points)
{
	if (points >= 90)
		return 'A';
	else if (points >= 80)
		return 'B';
	else if (points >= 70)
		return 'C';
	else if (points >= 60)
		return 'D';
	else
		return 'F';
}

double MathematicalFunction(double input);	// defined below


int main()
{
	double rootOf5 = sqrt(5);

	std::cout << rootOf5 << std::endl << std::endl;

	PrintRoadMulti(3);

	std::cout << std::endl;

	std::cout << "The sum of 2 and 3 is " << Sum(2, 3) << "." << std::endl;

	std::cout << "Is -11 positive? " << std::boolalpha << IsPositive(-11) << std::endl;

	std::cout << "Are the magnitudes of 34 and -34 equal? " << AbsEqual(34, -34) << std::endl;

	std::cout << "What grade do you get with 69 points? " << GetGrade(69) << std::endl;

	std::cout << "What is f(x) = 3x + 4 for x = 23? " << MathematicalFunction(23) << std::endl;

	std::cin.get();

	return 0;
}

bool IsPositive(double number)
{
	return number > 0.0;
}

double MathematicalFunction(double input)
{
	return (3.0 * input) + 4.0;
}
