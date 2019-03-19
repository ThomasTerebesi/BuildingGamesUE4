#include "King.h"

King* King::instance = nullptr;

King::King()
{
	std::cout << "A king was crowned!" << std::endl;
}

King::~King()
{
}

King * King::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new King();
	}

	return instance;
}
