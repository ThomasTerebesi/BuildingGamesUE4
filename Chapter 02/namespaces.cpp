#include <iostream>

namespace physics
{
	float gravity = 9.80665;
	int velocity = 12;
}

int main()
{
	float g = physics::gravity;

	std::cout << "Gravity: " << g << std::endl;
	std::cout << "Velocity: " << physics::velocity << std::endl;

	std::cin.get();

	return 0;
}