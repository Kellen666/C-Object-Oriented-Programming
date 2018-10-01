#include<iostream>
using namespace std;

class RationalNumber
{
private:
	int a, b;
	static int count;

public:

	//Constructors
	RationalNumber();
	RationalNumber(const int&, const int&);

	//Getters
	int getNumerator() const;
	int getDenominator() const;
	static int getCount();

	//Setters
	void setNumerator(const int &x);
	void setDenominator(const int &y);

	//Additional Member functions
	double toDouble() const;
	void standardize();
	void reduce();
	void print() const;
	bool isEqual(const RationalNumber &r) const;
	RationalNumber operator+(const RationalNumber &r) const;  // use const to make sure 
	RationalNumber operator+(const int &x) const;            // the element won't be modified
	RationalNumber operator-() const;
	RationalNumber& operator++();
	RationalNumber operator++(int DUMMY);
    friend RationalNumber operator+(const int &x, const RationalNumber &r);   //Non-member function
	friend istream& operator>>(istream &inputStream, RationalNumber &r);
	friend ostream& operator<<(ostream &outputStream, const RationalNumber &r);
};
