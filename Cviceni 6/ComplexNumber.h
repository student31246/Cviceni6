#pragma once
#include "RealNumber.h"
class ComplexNumber : public RealNumber
{

public:

	ComplexNumber() : RealNumber() { imagine = 0; };
	ComplexNumber(float n, float i) : RealNumber(n) { imagine = i; };
	ComplexNumber(const ComplexNumber& n) : RealNumber(n) { imagine = n.imagine; };

	ComplexNumber& operator = (const Number& s);
	ComplexNumber operator + (const Number& n);
	ComplexNumber& operator += (const Number& n);
	ComplexNumber operator - (const Number& n);
	ComplexNumber& operator -= (const Number& n);
	ComplexNumber operator * (const Number& n);
	ComplexNumber& operator *= (const Number& n);
	ComplexNumber operator / (const Number& n);
	ComplexNumber& operator /= (const Number& n);

	ComplexNumber& operator = (const ComplexNumber& s);
	ComplexNumber operator + (const ComplexNumber& n);
	ComplexNumber& operator += (const ComplexNumber& n);
	ComplexNumber operator - (const ComplexNumber& n);
	ComplexNumber& operator -= (const ComplexNumber& n);
	ComplexNumber operator * (const ComplexNumber& n);
	ComplexNumber& operator *= (const ComplexNumber& n);
	ComplexNumber operator / (const ComplexNumber& n);
	ComplexNumber& operator /= (const ComplexNumber& n);

	float GetImagine() const { return imagine; };

	~ComplexNumber() {};

private:
	float imagine;


};

