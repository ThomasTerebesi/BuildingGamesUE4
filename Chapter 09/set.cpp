#include <iostream>
#include <set>
#include <string>

int main()
{
	std::set<int> intSet;

	intSet.insert(7);
	intSet.insert(7);
	intSet.insert(8);
	intSet.insert(2);

	for (std::set<int>::iterator iter = intSet.begin(); iter != intSet.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}

	std::cout << std::endl;

	std::set<int>::iterator iter = intSet.find(7);

	if (iter != intSet.end())
		std::cout << "Found " << *iter << "." << std::endl;

	std::cout << std::endl;


	// Exercise:
	std::set<std::string> nameSet;
	
	std::cout << "Please enter three unique names below." << std::endl;
	while (nameSet.size() < 3)
	{
		std::cout << "Enter a name: ";

		std::string tempName;
		std::cin >> tempName;

		nameSet.insert(tempName);
	}

	std::cout << std::endl;

	std::cout << "These are the three unique names you entered:" << std::endl;
	for (std::set<std::string>::iterator iter = nameSet.begin(); iter != nameSet.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}

	std::cin.get();
	std::cin.get();

	return 0;
}