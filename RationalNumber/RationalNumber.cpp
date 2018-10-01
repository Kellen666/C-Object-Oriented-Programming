#include "RationalNumber.h"
#include <cmath>
#include <iostream>

using namespace std;

RationalNumber::RationalNumber()
{
	setNumerator(0);
	setDenominator(1);
}

RationalNumber::RationalNumber(int x)
{
	setNumerator(x);
	setDenominator(1);
}
RationalNumber::RationalNumber(int x, int y)
{
	setNumerator(x);
	setDenominator(y);
}

int RationalNumber::getNumerator()
{
	return a;
}
int RationalNumber::getDenominator()
{
	return b;
}

void RationalNumber::setNumerator(int x)
{
	a = x;
}
void RationalNumber::setDenominator(int y)
{
	//In case the denominator is being set to zero change it to 1. 
	//This is just to make sure we always have a valid rational 
	//number by design
	if (y == 0)
		y = 1;
	b = y;
}

double RationalNumber::toDouble()
{
	return static_cast<double>(a)/b;
}
void RationalNumber::standardize()
{
	if (getDenominator() < 0)
	{
		setNumerator(getNumerator()*-1);
		setDenominator(getDenominator()*-1);
	}
}
void RationalNumber::reduce()
{
	int x = abs(getNumerator());
	int y = abs(getDenominator());
	int gcd = x > y ? x : y;	//start the gcd from the larger!
	for (; gcd >= 1; gcd--)
	{
		if (x % gcd == 0 && y % gcd == 0)
			break;
	}
	setNumerator(getNumerator() / gcd);
	setDenominator(getDenominator() / gcd);
}
void RationalNumber::print()
{
	cout << getNumerator() << "/" << getDenominator();
}
