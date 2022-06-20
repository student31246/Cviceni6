#include "Fish.h"

int Fish::Eat(int food)
{
	if (!Live()) return 0;
	GetOlder(4);
	return this->stomache += food;
}


//FOR TEST ONLY
void Fish::GetInfo()
{
	cout << "Stomache: " << this->stomache << "  Age: " << this->age << "  ApproxLife: " << this->approxLifeAge << "  Name: " << this->name<<"  Feather color: "<< this->waterSalt << endl;
}