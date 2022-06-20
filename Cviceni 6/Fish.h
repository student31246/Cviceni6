#pragma once
#include "Beast.h"
#include "EnumsHelpers.cpp"
class Fish : public Beast
{
private:
	WaterSalt waterSalt;
public:
	Fish(int aproxLife, char* name) : Beast(name) { approxLifeAge = aproxLife; };

	int Eat(int food) override;
	void SetWaterSalt(WaterSalt salt) { this->waterSalt = salt; }
	

	//FOR TEST ONLY
	void GetInfo();
};

