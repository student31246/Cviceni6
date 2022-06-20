#pragma once
#include "Beast.h"
#include "EnumsHelpers.cpp"
class Bird : public Beast
{
private:
	FeatherColor feather;
public:	
	Bird(int aproxLife, char* name) : Beast(name) { approxLifeAge = aproxLife; };

	int Eat(int food) override;
	void SetFeatherColor(FeatherColor color) { this->feather = color; }

	//FOR TEST ONLY
	void GetInfo();
};

