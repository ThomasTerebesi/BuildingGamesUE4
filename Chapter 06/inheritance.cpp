#include "Dog.h"
#include "Cat.h"
#include "Human.h"

int main()
{
	{
		Human human;
		human.Breathe();
		human.Talk();
		human.Walk();

		std::cout << std::endl;

		Cat cat;
		cat.Breathe();
		cat.Talk();
		cat.Walk();

		std::cout << std::endl;

		Dog dog;
		dog.Breathe();
		dog.Talk();
		dog.Walk();

		std::cout << std::endl;
	}

	std::cin.get();

	return 0;
}