#pragma once
#include "Integer.h"
class RealNumber : public Integer
{

public:

	RealNumber() : Integer() {};
	RealNumber(float n) { number = n; };

	RealNumber& operator = (const Number& s);
	RealNumber& operator = (float n);
	RealNumber operator + (const Number& n);
	RealNumber& operator += (const Number& n);
	RealNumber operator - (const Number& n);
	RealNumber& operator -= (const Number& n);
	RealNumber operator * (const Number& n);
	RealNumber& operator *= (const Number& n);
	RealNumber operator / (const Number& n);
	RealNumber& operator /= (const Number& n);

	~RealNumber() {};
};