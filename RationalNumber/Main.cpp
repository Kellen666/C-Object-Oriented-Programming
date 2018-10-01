#include <iostream>
#include "RationalNumber.h"

using namespace std;

int main()
{

	RationalNumber r(3,5), p(4,3), q, a, b(0,2);

	cout << "You have created " << r.getCount() << " Rational NUmber objects." << endl;

	cout << "You have created " << RationalNumber::getCount() << " Rational Number objects." << endl;

	system("Pause");
	return 0;
}
