#include <iostream>
#include "RationalNumber.h"

using namespace std;

int main()
{
	RationalNumber r1, r2(3), r3(5, -15);

	cout << "r1 is ";
	r1.print();
	cout << endl;

	cout << "r2 is ";
	r2.print();
	cout << endl;

	cout << "r3 is ";
	r3.print();
	cout << endl;

	r3.standardize();
	cout << "r3 numerator is " << r3.getNumerator() << endl;
	cout << "r3 denominator is " << r3.getDenominator() << endl;

	r3.reduce();
	cout << "r3 numerator is " << r3.getNumerator() << endl;
	cout << "r3 denominator is " << r3.getDenominator() << endl;

	cout << "In double format, r3 is " << r3.toDouble() << endl;

	r2.setDenominator(0);
	cout << "In double format r2 is " << r2.toDouble() << endl;

	RationalNumber r4(1, 0);
	cout << "r4 is ";
	r4.print();
	cout << endl;

	system("Pause");
	return 0;
}
