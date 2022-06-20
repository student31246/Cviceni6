#include "ComplexNumber.h"

ComplexNumber& ComplexNumber::operator = (const Number& s)
{
	RealNumber::operator=(s);
	return *this;
}

ComplexNumber ComplexNumber::operator + (const Number& n)
{
	RealNumber res = RealNumber::operator+(n);
	float result = res.GetNumber();
	return ComplexNumber(result,this->imagine);
}

ComplexNumber& ComplexNumber::operator += (const Number& n)
{
	RealNumber::operator+=(n);
	return *this;
}

ComplexNumber ComplexNumber::operator - (const Number& n)
{
	RealNumber res = RealNumber::operator-(n);
	float result = res.GetNumber();
	return ComplexNumber(result,this->imagine);
}

ComplexNumber& ComplexNumber::operator -= (const Number& n)
{
	RealNumber::operator-=(n);
	return *this;
}

ComplexNumber ComplexNumber::operator * (const Number& n)
{
	RealNumber res = RealNumber::operator*(n);
	float result = res.GetNumber();
	return ComplexNumber(result,this->imagine);
}

ComplexNumber& ComplexNumber::operator *= (const Number& n)
{
	RealNumber::operator*=(n);
	return *this;
}

ComplexNumber ComplexNumber::operator / (const Number& n)
{
	RealNumber res = RealNumber::operator/(n);
	float result = res.GetNumber();
	return ComplexNumber(result,this->imagine);
}

ComplexNumber& ComplexNumber::operator /= (const Number& n)
{
	RealNumber::operator/=(n);
	return *this;
}

ComplexNumber& ComplexNumber::operator = (const ComplexNumber& s)
{
	RealNumber::operator=(s);
	this->imagine = s.imagine;
	return *this;
}

ComplexNumber ComplexNumber::operator + (const ComplexNumber& n)
{
	RealNumber res = RealNumber::operator+(n);
	float result = res.GetNumber();
	float imag = this->imagine + n.imagine;
	return ComplexNumber(result, imag);
}

ComplexNumber& ComplexNumber::operator += (const ComplexNumber& n)
{
	RealNumber::operator+=(n);
	this->imagine += n.imagine;
	return *this;
}

ComplexNumber ComplexNumber::operator - (const ComplexNumber& n)
{
	RealNumber res = RealNumber::operator-(n);
	float result = res.GetNumber();
	float imag = this->imagine - n.imagine;
	return ComplexNumber(result, imag);
}

ComplexNumber& ComplexNumber::operator -= (const ComplexNumber& n)
{
	RealNumber::operator-=(n);
	this->imagine -= n.imagine;
	return *this;
}

ComplexNumber ComplexNumber::operator * (const ComplexNumber& n)
{
	float num = this->number * n.GetNumber() + this->imagine * n.GetImagine() * -1;
	float imag = this->imagine * n.GetNumber() + this->number * n.GetImagine();
	return ComplexNumber(num, imag);
}

ComplexNumber& ComplexNumber::operator *= (const ComplexNumber& n)
{
	this->number = this->number * n.GetNumber() + this->imagine * n.GetImagine() * -1;
	this->imagine = this->imagine * n.GetNumber() + this->number * n.GetImagine();
	return *this;
}

ComplexNumber ComplexNumber::operator / (const ComplexNumber& n)
{
	float num = (this->number * this->imagine + n.GetNumber() * n.GetImagine()) / (pow(n.GetNumber(), 2) + pow(n.GetImagine(), 2) * -1);
	float imag = (this->imagine * n.GetNumber() - this->number * n.GetImagine()) / (pow(n.GetNumber(), 2) + pow(n.GetImagine(), 2) * -1);
	return ComplexNumber(num, imag);
}

ComplexNumber& ComplexNumber::operator /= (const ComplexNumber& n)
{
	this->number = (this->number * this->imagine + n.GetNumber() * n.GetImagine()) / (pow(n.GetNumber(), 2) + pow(n.GetImagine(), 2) * -1);
	this->imagine = (this->imagine * n.GetNumber() - this->number * n.GetImagine()) / (pow(n.GetNumber(), 2) + pow(n.GetImagine(), 2) * -1);
	return *this;
}