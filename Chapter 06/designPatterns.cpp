#include <iostream>
#include "King.h"

int main()
{
	King::GetInstance()->SetName("Arthur");
	std::cout << "I am King " << King::GetInstance()->GetName() << "!" << std::endl;

	std::cin.get();

	return 0;
}