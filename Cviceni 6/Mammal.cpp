#include "Mammal.h"

int Mammal::Eat(int food)
{
	if (!Live()) return 0;
	GetOlder(3);
	return this->stomache += food;
}


//FOR TEST ONLY
void Mammal::GetInfo()
{
	cout << "Stomache: " << this->stomache << "  Age: " << this->age << "  ApproxLife: " << this->approxLifeAge << "  Name: " << this->name <<"  Finger count: "<< this->fingers << endl;
}