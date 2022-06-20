#include "Integer.h"

Integer& Integer::operator = (const Number& s)
{
	this->number = round(s.GetNumber());
	return *this;
}

Integer& Integer::operator = (int n)
{
	this->number = n;
	return *this;
}

Integer Integer::operator + (const Number& n)
{
	int result = this->number + n.GetNumber();
	return Integer(result);
}

Integer& Integer::operator += (const Number& n)
{
	this->number += round(n.GetNumber());
	return *this;
}

Integer Integer::operator - (const Number& n)
{
	int result = this->number - n.GetNumber();
	return Integer(result);
}

Integer& Integer::operator -= (const Number& n)
{
	this->number -= round(this->number);
	return *this;
}

Integer Integer::operator * (const Number& n)
{
	int result = this->number * n.GetNumber();
	return Integer(result);
}

Integer& Integer::operator *= (const Number& n)
{
	this->number *= round(n.GetNumber());
	return *this;
}

Integer Integer::operator / (const Number& n)
{
	int result = this->number / n.GetNumber();
	return Integer(result);
}

Integer& Integer::operator /= (const Number& n)
{
	this->number /= round(n.GetNumber());
	return *this;
}
