#include <iostream>
#include "RationalNumber.h"

using namespace std;

int main()
{
	/*
	RationalNumber r1(-5, 6), r2;
	r2.setNumerator(15);
	r2.setDenominator(-18);
	cout << "r1 is ";
	r1.print();
	cout << endl;
	cout << "r2 is ";
	r2.print();
	cout << endl;
	bool answer = r1.isEqual(r2);
	if (answer)
		cout << "r1 and r2 are equal." << endl;
	else
		cout << "r1 and r2 are not equal." << endl;
	*/

	/*
	// Test Overloading Binary Operator
	RationalNumber r1(3,4), r2(5,7), r3;
	//r3 = r1 + r2;
	r3 = r1.operator+(r2);
	r3.print();
	cout << endl;
	RationalNumber r4(1,2);
	r4 = r4 + 5;
	r4.print();
	*/
	/*
	RationalNumber r1(1,2), r2;
	RationalNumber temp(5,1);
	r2 = temp + r1;
	r2.print();
	*/

	/*
	RationalNumber r1(3,4);
	RationalNumber r2 = -r1;
	r2.print();
	r1++;
	r1.print();
	++++r1;
	//r1++;
	r1.print();
	*/

	/*
	RationalNumber r;
	cin >> r;
	cout << r;
	cout << endl << endl;

	RationalNumber r2, r3, r4;
	cin >> r2 >> r3 >> r4;
	cout << "r2 = " << r2 << ", r3 = " << r3 << ", and r4 = " << r4 << endl;
	*/
	RationalNumber r(3,5), p(4,3), q, a, b(0,2);

	cout << "You have created " << r.getCount() << " Rational NUmber objects." << endl;

	cout << "You have created " << RationalNumber::getCount() << " Rational Number objects." << endl;

	system("Pause");
	return 0;
}