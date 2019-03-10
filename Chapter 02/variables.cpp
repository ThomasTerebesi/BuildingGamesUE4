#include <iostream>
#include <string>

int main()
{
	std::string name;
	int goldPieces;
	float hp;

	name = "Thomas";
	goldPieces = 322;
	hp = 75.5f;

	std::cout << "Character " << name << " has " << hp << " hp and " << goldPieces << " gold.";	

	std::cin.get();

	return 0;
}