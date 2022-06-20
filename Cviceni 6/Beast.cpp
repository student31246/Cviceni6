#include "Beast.h"

Beast& Beast::operator=(const Beast& bst)
{
	this->stomache = bst.stomache;
	this->age = bst.age;
	delete[] this->name;
	this->name = new char[250];
	strcpy_s(this->name, strlen(bst.name)+1, bst.name);
	return *this;
}

int Beast::Eat(int food)
{
	if (!Live()) return 0;
	GetOlder(1);
	return this->stomache += food;
}

int Beast::Poop(int volume)
{
	if ((this->stomache -= volume) <= 0)
		this->stomache = 0;
	return this->stomache;
}