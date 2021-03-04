#pragma once
#include <iostream>

class Entity
{
public:
	Entity() { std::cout << "Create Entity \n"; }
	~Entity() { std::cout << "Delete Entity \n"; }

	void Test() {}
};