#include <iostream>
#include <string>

class Player
{
private:
	std::string name;

public:
	std::string GetName() { return name; }

	Player()
	{
		std::cout << "Player object constructed!" << std::endl;
		name = "Thomas";
	}

	~Player()
	{
		std::cout << "Player object destroyed!" << std::endl;
	}
};


int main()
{
	// Had to add the extra scope so that the destructor's message would be printed.
	{
		Player p;

		std::cout << "The player's name is " << p.GetName() << "." << std::endl;
	}

	std::cin.get();

	return 0;
}