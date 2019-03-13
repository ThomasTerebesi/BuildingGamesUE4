// IMPLEMENTATION

#include "prototypes.h"

int superglobal;

bool IsPositive(double number)
{
	return number > 0.0;
}

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