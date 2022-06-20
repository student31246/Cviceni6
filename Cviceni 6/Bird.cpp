#include "Bird.h"

int Bird::Eat(int food)
{
	if (!Live()) return 0;
	GetOlder(2);
	return this->stomache += food;
}


//FOR TEST ONLY
void Bird::GetInfo()
{
	cout << "Stomache: " << this->stomache << "  Age: " << this->age << "  ApproxLife: " << this->approxLifeAge << "  Name: " << this->name <<"  Feather color: "<< this->feather << endl;
}