#include <iostream>
#include <string>

struct Armor
{
	std::string name;
	int armorClass;
	double durability;
};

struct Player
{
	std::string name;
	int hp;
	Armor armor;

	void Damage(int amount)
	{
		if (amount > armor.armorClass)
			hp -= amount - armor.armorClass;
	}

	void Recover(int amount)
	{
		hp += amount;
	}
};

int main()
{
	std::string str = "Strings are objects!";
	str.append("!!");

	std::cout << str << std::endl << std::endl;

	Player p;
	p.name = "Thomas";
	p.hp = 100;
	p.armor.name = "Black Metal Armor";
	p.armor.armorClass = 28;
	p.armor.durability = 420.0;

	p.Damage(43);

	std::cout << p.name << " has " << p.hp << " hit points left." << std::endl;

	p.Recover(15);

	std::cout << "After recovering, " << p.name << " has " << p.hp << " hit points." << std::endl;

	std::cin.get();

	return 0;
}