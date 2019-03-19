#include "Dog.h"

Dog::Dog() 
{ 
	std::cout << "A dog is born!" << std::endl; 
}

Dog::~Dog() 
{ 
	std::cout << "The dog died." << std::endl; 
}

void Dog::Talk()
{ 
	std::cout << "Woof!" << std::endl; 
}

void Dog::Walk()
{ 
	std::cout << "Left front paw and back right paw, right front paw and back left paw... At the speed of " << speed << "." << std::endl; 
}
