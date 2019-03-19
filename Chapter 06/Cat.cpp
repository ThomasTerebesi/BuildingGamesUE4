#include "Cat.h"

Cat::Cat()
{
	std::cout << "A cat is born!" << std::endl;
}

Cat::~Cat() 
{ 
	std::cout << "The cat died." << std::endl; 
}

void Cat::Talk() 
{ 
	std::cout << "Meow!" << std::endl; 
}

void Cat::Walk()
{ 
	std::cout << "Left front paw and back right paw, right front paw and back left paw... At the speed of " << speed << "." << std::endl;
}