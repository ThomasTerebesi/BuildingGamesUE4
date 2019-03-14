#include <iostream>
#include <string>

class Player
{
private:
	std::string name;
	int hp;

public:
	std::string GetName() { return name; }
	int GetHitPoints() { return hp; }

	void SetName(std::string newName) { name = newName; }
	void SetHitPoints(int newHitPoints);
};

int main()
{
	Player p;

	p.SetName("Thomas");
	p.SetHitPoints(125);

	std::cout << p.GetName() << " has " << p.GetHitPoints() << " hit points." << std::endl;

	std::cin.get();

	return 0;
}

void Player::SetHitPoints(int newHitPoints)
{
	if (newHitPoints < 0)
	{
		std::cout << "Error, player hit points cannot be less than 0." << std::endl;
		hp = 0;
	}
	else
		hp = newHitPoints;
}
