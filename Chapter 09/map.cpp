#include <iostream>
#include <string>
#include <map>

int main()
{
	std::map<std::string,int> items;

	items.insert(std::make_pair("Apple", 12));
	items.insert(std::make_pair("Orange", 1));
	items.insert(std::make_pair("Banana", 3));

	items["Kiwi"] = 42;

	for (std::map<std::string, int>::iterator iter = items.begin(); iter != items.end(); ++iter)
	{
		std::cout << iter->first << ": " << iter->second << std::endl;
	}


	std::cout << std::endl;


	std::map<std::string, int>::iterator iter = items.find("Apple");

	if (iter != items.end())
		std::cout << "Found " << iter->second << " pieces of " << iter->first << "." << std::endl;


	std::cout << std::endl;

	// Exercise:
	std::map<std::string, int> userItems;

	std::cout << "Enter items and their quantities below." << std::endl;
	while (userItems.size() < 5)
	{
		std::cout << "Enter name of the item: ";
		std::string itemName;
		std::cin >> itemName;

		std::cout << "Enter quantity in inventory: ";
		short itemQuantity;
		std::cin >> itemQuantity;

		userItems.insert(std::make_pair(itemName, itemQuantity));
	}

	std::cout << std::endl;

	for (std::map<std::string, int>::iterator iter = userItems.begin(); iter != userItems.end(); ++iter)
	{
		std::cout << iter->first << ": " << iter->second << std::endl;
	}


	std::cin.get();
	std::cin.get();

	return 0;
}