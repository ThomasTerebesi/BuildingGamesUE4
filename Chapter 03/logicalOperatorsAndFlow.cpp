#include <iostream>

int main()
{
	bool isWearingSocks = true;

	if (!isWearingSocks)
		std::cout << "Get some socks on!" << std::endl;
	else
		std::cout << "You already have your socks on. Nice!" << std::endl;


	bool hidden = true;			// 'hidden' is set to true, so ...
	bool isVisible = !hidden;	// ... assigning '!hidden' to isVisible will make it false.

	std::cout << "\n'hidden' = " << std::boolalpha << hidden << ", '!hidden' = " << !hidden << ", 'isVisible' = " << isVisible << std::endl;


	bool foundStar = false;
	float levelCompleteTime = 25.0f;
	float maxTimeForBonus = 60.0f;

	if (foundStar || (levelCompleteTime < maxTimeForBonus))
		std::cout << "\nBonus awarded!" << std::endl;
	else
		std::cout << "\nNo bonus awarded." << std::endl;


	int x = 0;
	int y = 0;

	std::cout << "Enter the value for 'x': ";
	std::cin >> x;
	std::cout << "Enter the value for 'y': ";
	std::cin >> y;
	std::cout << std::endl;

	if (x > y)
		std::cout << x << " ('x') is the greater value." << std::endl;
	else if (x < y)
		std::cout << y << " ('y') is the greater value." << std::endl;
	else if (x == y)
		std::cout << x << " ('x') and " << y << " ('y') are equal." << std::endl;


	enum Items
	{
		key = 0,
		coin,
		sandDollar
	};

	Items itemInHand = Items::coin;

	if (itemInHand == Items::key)
	{
		std::cout << "\nThe key has a lion's head on the handle." << std::endl;
		std::cout << "You got into a secret room using the key!" << std::endl;
	}
	else if (itemInHand == Items::coin)
	{
		std::cout << "\nThe coin is a rusted brassy color. It has a picture of a lady with a skirt on it." << std::endl;
		std::cout << "Using this coin you could buy a few things..." << std::endl;
	}
	else if (itemInHand == Items::sandDollar)
	{
		std::cout << "\nThe sanddollar has a little star on it." << std::endl;
		std::cout << "You might be able to trade it for something." << std::endl;
	}

	std::cout << std::endl;


	enum Food
	{
		Fish,
		Bread,
		Apple,
		Orange
	};

	Food food = Bread;
	
	switch (food)
	{
	case Fish:
		std::cout << "Fishy fish!" << std::endl;
		break;
	case Bread:
		std::cout << "Delicious bread!" << std::endl;
		break;
	case Apple:
		std::cout << "Apples are good for you!" << std::endl;
		break;
	case Orange:
		std::cout << "Orange." << std::endl;
		break;
	default:
		std::cout << "Invalid food choice." << std::endl;
		break;
	}


	enum Mounts
	{
		Horse = 1,
		Mare,
		Mule,
		Sheep,
		Chocobo
	};


	std::cout << "\nThere are the following mounts:" << std::endl;
	std::cout << "Horse: 1" << std::endl;
	std::cout << "Mare: 2" << std::endl;
	std::cout << "Mule: 3" << std::endl;
	std::cout << "Sheep: 4" << std::endl;
	std::cout << "Chocobo: 5" << std::endl;
	std::cout << "Choose your mount: ";

	int mount = 0;
	std::cin >> mount;

	std::cout << std::endl;

	switch (mount)
	{
	case Horse:
		std::cout << "This steed is valiant and mighty." << std::endl;
		break;
	case Mare:
		std::cout << "This mare is white and beautiful." << std::endl;
		break;
	case Mule:
		std::cout << "You are given a mule to ride. You resent that." << std::endl;
		break;
	case Sheep:
		std::cout << "Baa! The sheep can barely support your weight." << std::endl;
		break;
	case Chocobo:
		std::cout << "Chocobo!" << std::endl;
		break;
	default:
		std::cout << "Invalid mount." << std::endl;
		break;
	}


	std::cin.get();
	std::cin.get();

	return 0;
}