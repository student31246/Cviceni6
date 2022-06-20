#pragma once
#include <iostream>
using namespace std;

class Beast
{
protected:
	int stomache;
	int age;
	int approxLifeAge;
	char* name = new char[250];
	int Live() { return this->stomache > 0; }
	void GetOlder(int years) { this->age+= years; }

public:
	Beast() { stomache = 1; age = 0; }
	Beast(const char* nm) :Beast() { strcpy_s(this->name,strlen(nm)+1, nm); }
	Beast(const Beast& bst) { this->stomache = bst.stomache; this->age = bst.age; strcpy_s(this->name, strlen(bst.name)+1, bst.name); this->approxLifeAge = bst.approxLifeAge; }

	Beast& operator=(const Beast& bst);

	char* GetName() { return name; }
	void SetName(const char* nm) { strcpy_s(this->name, strlen(nm)+1, nm); }
	virtual int Eat(int food);
	int Poop(int volume);
	void Print() { cout << "Age: " << this->age << " " << "Stomache: " << this->stomache << " Name: " << this->GetName() << endl; }

	~Beast() { delete[] name; }
};

