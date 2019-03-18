#include <iostream>
#include <string>

class Player
{
private:
	std::string name;
	int hitPoints;

public:
	Player() { std::cout << "A new player joined the game!" << std::endl; };
	~Player() { std::cout << "A player left the game." << std::endl; };
};


int main()
{
	{
		Player player1;
	}

	std::cout << std::endl;

	Player * player2 = new Player();
	delete player2;

	std::cin.get();

	return 0;
}