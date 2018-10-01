#include "RationalNumber.h"
#include <cmath>
#include <iostream>

using namespace std;

/*
RationalNumber::RationalNumber()
{

	a = 1;
	b = 1;
}

RationalNumber::RationalNumber(const int &x, const int &y)
{

	a = x;
	b = y != 0 ? y : 1;

	standardize();
	reduce();
}

*/
int RationalNumber::getNumerator() const
{
	return a;
}

int RationalNumber::getDenominator() const
{
	return b;
}

void RationalNumber::setNumerator(const int &x)
{
	a = x;

	standardize();
	reduce();
}

void RationalNumber::setDenominator(const int &y)
{
	b = y != 0 ? y : 1;

	standardize();
	reduce();
}

double RationalNumber::toDouble() const
{
	return static_cast<double>(getNumerator())/getDenominator();
}

void RationalNumber::standardize()   //Make sure Denominator is positive
{
	if (getDenominator() < 0)
	{
		a = -1 * a;
		b = -1 * b;
	}
}

void RationalNumber::reduce()     //ÇóGCD
{
	if (getNumerator() == 0)
	{
		b = 1;
		return;
	}
	else
	{
    	int x = abs(getNumerator());
	    int y = abs(getDenominator());
     	int gcd = x < y ? x : y;	
     	for (; gcd >= 1; gcd--)
    	{
	    	if (x % gcd == 0 && y % gcd == 0)
     			break;
    	}
    	
		a = a / gcd;
		b = b / gcd;
	}
}

void RationalNumber::print() const
{
	cout << getNumerator() << "/" << getDenominator() << endl;
}

bool RationalNumber::isEqual(const RationalNumber &r) const
{
	if (getNumerator() * r.getDenominator() == getDenominator() * r.getNumerator())
		return true;
	else
		return false;
}

RationalNumber RationalNumber::operator+(const RationalNumber &r) const
{
	int a1 = this->getNumerator();
	int b1 = this->getDenominator();
	int a2 = r.getNumerator();
	int b2 = r.getDenominator();
	//Now our aim is to add a1/b1 + a2/b2 which gives (a1b2 + a2b1)/(b1b2)
	int n = a1 * b2 + a2 * b1;
	int d = b1 * b2;
	RationalNumber answer(n, d);
	answer.standardize();
	answer.reduce();
	return answer;
}

RationalNumber RationalNumber::operator+(const int &x) const
{
	RationalNumber temp(x, 1);
	return *this + temp;
}

RationalNumber operator+(const int &x, const RationalNumber &r)
{
	RationalNumber temp1(x, 1);
	RationalNumber temp2(r.a, r.b);
	return temp1 + temp2;
}

RationalNumber RationalNumber::operator-() const  // -r
{
	RationalNumber answer(-1 * this->getNumerator(), this->getDenominator());
	answer.standardize();
	return answer;
}

RationalNumber& RationalNumber::operator++()   // ++r
{
	this->setNumerator(this->getNumerator() + this->getDenominator());
	return *this;
}

RationalNumber RationalNumber::operator++(int DUMMY)  // r++
{
	RationalNumber temp = *this;
	this->setNumerator(this->getNumerator() + this->getDenominator());
	return temp;
}

istream& operator>>(istream &inputStream, RationalNumber &r)
{
	int n, d;
	cout << "Please enter the numerator: ";
	inputStream >> n;
	cout << "Please enter the denominator: ";
	inputStream >> d;
	r = RationalNumber(n, d);
	return inputStream;
}

ostream& operator<<(ostream &outputStream, const RationalNumber &r)
{
	outputStream << r.getNumerator() << "/" << r.getDenominator();
	return outputStream;
}

int RationalNumber::count = 0;

RationalNumber::RationalNumber()
{
	setNumerator(1);
	setDenominator(1);
	this->count++;
}

RationalNumber::RationalNumber(const int &numerator, const int &denominator)
{
	setNumerator(numerator);
	setDenominator(denominator);
	this->count++;
}

int RationalNumber::getCount()
{
	return RationalNumber::count;
}