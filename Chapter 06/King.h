#pragma once

#include <iostream>
#include <string>

class King
{
public:
	~King();

	static King* GetInstance();

	void SetName(std::string n) { name = n; };
	std::string GetName() const { return name; };

private:
	King();

	static King* instance;
	std::string name;
};