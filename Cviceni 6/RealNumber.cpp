#include "RealNumber.h"

RealNumber& RealNumber::operator = (const Number& s)
{
	this->number = s.GetNumber();
	return *this;
}

RealNumber& RealNumber::operator = (float n)
{
	this->number = n;
	return *this;
}

RealNumber RealNumber::operator + (const Number& n)
{
	int result = this->number + n.GetNumber();
	return RealNumber(result);
}

RealNumber& RealNumber::operator += (const Number& n)
{
	this->number += n.GetNumber();
	return *this;
}

RealNumber RealNumber::operator - (const Number& n)
{
	int result = this->number - n.GetNumber();
	return RealNumber(result);
}

RealNumber& RealNumber::operator -= (const Number& n)
{
	this->number -= n.GetNumber();
	return *this;
}

RealNumber RealNumber::operator * (const Number& n)
{
	int result = this->number * n.GetNumber();
	return RealNumber(result);
}

RealNumber& RealNumber::operator *= (const Number& n)
{
	this->number *= n.GetNumber();
	return *this;
}

RealNumber RealNumber::operator / (const Number& n)
{
	int result = this->number / n.GetNumber();
	return RealNumber(result);
}

RealNumber& RealNumber::operator /= (const Number& n)
{
	this->number /= n.GetNumber();
	return *this;
}
