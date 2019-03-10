#include <iostream>

int main()
{
	const int MAX_LIVES = 5;

	enum Weapon
	{
		sword = 0,
		knife,
		axe,
		mace,
		numberOfWeaponTypes,
		defaultWeapon = mace
	};

	enum isAlive : bool
	{
		alive = true,
		dead = false
	};

	std::cout << "Value of 'axe': " << Weapon::axe << std::endl;

	std::cout << "The maximum number of lives is " << MAX_LIVES << std::endl;

	bool bAlive = isAlive::dead;

	if (bAlive)
		std::cout << "Player is alive!" << std::endl;
	else
		std::cout << "Player is dead!" << std::endl;

	std::cin.get();

	return 0;
}