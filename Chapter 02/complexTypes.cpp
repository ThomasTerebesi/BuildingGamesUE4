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
	Vector v;
	v.x = 20;
	v.y = 40;
	v.z = 30;

	std::cout << "There is a vector at " << v.x << ", " << v.y << ", " << v.z << "." << std::endl;

	Player p;
	p.name = "Thomas";
	p.hitPoints = 100;
	p.position.x = p.position.y = p.position.z = 0;

	std::cin.get();

	return 0;
}