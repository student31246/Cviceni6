#include "Number.h"

Number& Number::operator = (const Number& s)
{
	this->number = s.number;
	return *this;
}

Number& Number::operator = (float n)
{
	n >= 0 ? this->number = round(n) : number = 0;
	return *this;
}

Number Number::operator + (const Number& n)
{
	float result = this->number + n.number;
	Number res(result);
	return res;
}

Number& Number::operator += (const Number& n)
{
	this->number += n.number;
	return *this;
}

Number Number::operator - (const Number& n)
{
	float result = this->number - n.number;
	Number res(result);
	return res;
}

Number& Number::operator -= (const Number& n)
{
	n.number >= this->number? this->number = 0 : this->number -= n.number;
	return *this;
}

Number Number::operator * (const Number& n)
{
	float result = this->number * n.number;
	Number res(result);
	return res;
}

Number& Number::operator *= (const Number& n)
{
	n.number <= 0 ? this->number = 0 : this->number *= n.number;
	return *this;
}

Number Number::operator / (const Number& n)
{
	float result = this->number / n.number;
	Number res(result);
	return res;
}

Number& Number::operator /= (const Number& n)
{
	n.number < 0 ? this->number = 0 : this->number /= n.number;
	return *this;
}
