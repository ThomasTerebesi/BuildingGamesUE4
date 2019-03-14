#include <iostream>

class Mammal
{
protected:
	int hp;
	double speed;

public:
	Mammal()
	{
		hp = 100;
		speed = 1.0;
		std::cout << "A mammal is born!" << std::endl;
	}

	~Mammal() { std::cout << "A mammal has died!" << std::endl; }

	void Breathe() { std::cout << "Breathe in... and breathe out." << std::endl; }

	virtual void Talk() { std::cout << "Mammal talk... Override this function!" << std::endl; }

	virtual void Walk() = 0;
};


class Dog : public Mammal
{
public:
	Dog() { std::cout << "A dog is born!" << std::endl; }

	~Dog() { std::cout << "The dog died." << std::endl; }

	virtual void Talk() override { std::cout << "Woof!" << std::endl; }

	virtual void Walk() override { std::cout << "Left front paw and back right paw, right front paw and back left paw... At the speed of " << speed << "." << std::endl; }
};


class Cat : public Mammal
{
public:
	Cat() { std::cout << "A cat is born!" << std::endl; }
	
	~Cat() { std::cout << "The cat died." << std::endl; }

	virtual void Talk() override { std::cout << "Meow!" << std::endl; }
	
	virtual void Walk() override { std::cout << "Left front paw and back right paw, right front paw and back left paw... At the speed of " << speed << "." << std::endl; }
};


class Human : public Mammal
{
	bool civilized;
public:
	Human()
		: civilized(true)
	{
		std::cout << "A new human is born!" << std::endl;
		speed = 2.0;
	}

	~Human() { std::cout << "The human died." << std::endl; }

	virtual void Talk() override { std::cout << "I'm pretty good looking for a human." << std::endl; }

	virtual void Walk() override { std::cout << "Left, right, left, right... At the speed of " << speed << "." << std::endl; }
};


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