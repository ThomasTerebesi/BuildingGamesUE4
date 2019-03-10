#include <iostream>
#include <string>

struct Vector
{
	float x, y, z;
};

struct Player
{
	std::string name;
	int hitPoints;
	Vector position;
};

int main()
{
	Player p;
	p.name = "Thomas";
	p.hitPoints = 100;
	p.position.x = p.position.y = p.position.z = 0.0f;

	Player * pPtr = &p;

	std::cout << pPtr->name << " has " << pPtr->hitPoints << " hit points." << std::endl;
	std::cout << pPtr->name << " is at position " << pPtr->position.x << ", " << pPtr->position.y << ", " << pPtr->position.z << "." << std::endl;

	std::cout << "\nA Zombie attacks and knocks " << pPtr->name << " back!" << std::endl;
	pPtr->hitPoints -= 31;
	pPtr->position.x = pPtr->position.z = 0.4f;

	std::cout << "\n" << pPtr->name << " has " << pPtr->hitPoints << " hit points." << std::endl;
	std::cout << pPtr->name << " is at position " << pPtr->position.x << ", " << pPtr->position.y << ", " << pPtr->position.z << "." << std::endl;

	std::cout << "\nAddress of 'p': " << &p << std::endl;
	std::cout << "Address of 'p.name': " << &p.name << std::endl;				// Starts at the same address as 'p'.
	std::cout << "Address of 'p.hitPoints': " << &p.hitPoints << std::endl;		
	std::cout << "Address of 'pPtr': " << &pPtr << std::endl;
	std::cout << "Contents of 'pPtr': " << pPtr << std::endl;					// Consequently contains the address of 'p'.

	std::cin.get();

	return 0;
}