#pragma once
#include <iostream>

class Mammal
{
protected:
	int hp;
	double speed;

public:
	Mammal();
	~Mammal();

	void Breathe();

	virtual void Talk();

	virtual void Walk() = 0;
};