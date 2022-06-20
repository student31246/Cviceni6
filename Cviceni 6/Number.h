#pragma once
#include <iostream>
class Number
{
protected:

	float number;

public:

	Number() { this->number = 0; };
	Number(float num) { num >= 0 ? this->number = round(num) : number = 0; };

	Number& operator = (const Number& s);
	Number& operator = (float n);
	Number operator + (const Number& n);
	Number& operator += (const Number& n);
	Number operator - (const Number& n);
	Number& operator -= (const Number& n);
	Number operator * (const Number& n);
	Number& operator *= (const Number& n);
	Number operator / (const Number& n);
	Number& operator /= (const Number& n);

	float GetNumber() const { return this->number; };
	
	~Number() {};
};

