#pragma once
#include "Mammal.h"

class Human : public Mammal
{
	bool civilized;
public:
	Human();
	~Human();

	virtual void Talk() override;

	virtual void Walk() override;
};