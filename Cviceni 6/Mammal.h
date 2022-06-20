#pragma once
#include "Beast.h"
#include "EnumsHelpers.cpp"
class Mammal : public Beast
{
private:
	FingerCount fingers;
public:
	Mammal(int aproxLife, char* name) : Beast(name) { approxLifeAge = aproxLife; };

	int Eat(int food) override;
	void SetFingerCount(FingerCount count) { this->fingers = count; }

	//FOR TEST ONLY
	void GetInfo();
};

