#include "Mammal.h"

Mammal::Mammal()
{
	hp = 100;
	speed = 1.0;
	std::cout << "A mammal is born!" << std::endl;
}

Mammal::~Mammal() 
{ 
	std::cout << "A mammal has died!" << std::endl; 
}

void Mammal::Breathe() 
{ 
	std::cout << "Breathe in... and breathe out." << std::endl; 
}

void Mammal::Talk()
{
	std::cout << "Override this function!" << std::endl;
}


