#pragma once
#include "Number.h"
#include <iostream>
class Integer : public Number
{
public:
	
	Integer() : Number() {};
	Integer(int num) { number = num; };

	Integer& operator = (const Number& s);
	Integer& operator = (int n);
	Integer operator + (const Number& n);
	Integer& operator += (const Number& n);
	Integer operator - (const Number& n);
	Integer& operator -= (const Number& n);
	Integer operator * (const Number& n);
	Integer& operator *= (const Number& n);
	Integer operator / (const Number& n);
	Integer& operator /= (const Number& n);

	~Integer() {};
};

