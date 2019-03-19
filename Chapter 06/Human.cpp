#include "Human.h"

Human::Human()
	: civilized(true)
{
	std::cout << "A new human is born!" << std::endl;
	speed = 2.0;
}

Human::~Human() 
{ 
	std::cout << "The human died." << std::endl; 
}

void Human::Talk()
{ 
	std::cout << "I'm pretty good looking for a human." << std::endl; 
}

void Human::Walk() 
{ 
	std::cout << "Left, right, left, right... At the speed of " << speed << "." << std::endl; 
}