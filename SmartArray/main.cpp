#include <iostream>
#include "SmartArrayExample.h"
using namespace std;

int main()
{
	//Test Default Constructor
	SmartArray L1;
	cout << "Default SmartArray" << L1 << endl;

	//Test Non-Default Constructor
	int *x = new int[3];
	x[0] = 7; x[1] = 2; x[2] = 5;
	SmartArray L2(x, 3);
	cout << "Non-Default SmartArray: " << L2 << endl;

	//Test getSize and operator []
	cout << "Printing the SmartArray L2 elements: ";
	for (int i = 0; i < L2.getSize(); i++)
		cout << L2[i] << " ";
	cout << endl;


	L2[0] = -5;
	cout << "After modifying L2, it is now " << L2 << endl;

	//Test Append member function
	L1.append(54);
	cout << "After appending one element to it, Li is now " << L1 << endl;

	/*
	//Make a default copy of one SmartArray object to another
	SmartArray L3 = L2;
	cout << "L3 which is a copy of L2 is " << L3 << endl;
	
	// Modify an element of L3
	L3[1] == 33;
	cout << "After modifying an element of L3, now L3 is " << L3 << endl;
	cout << "Interestingly L2 is also modified and is " << L2 << endl;
	*/

	//Make a deep copy of one SmartArray object to another
	SmartArray L3 = L2;
	cout << "L3 which is a copy of L2 is " << L3 << endl;

	//Modify an element of L3
	L3[1] = 33;
	cout << "After modifying an element of L3, now L3 is " << L3 << endl;
	cout << "Interestingly L2 is unchanged and is " << L2 << endl;

	//Let us delete L2
	L2.~SmartArray();
	cout << "After deleting it, L2 is " << L2 << endl;
	cout << "Interestingly L3 is still" << L3 << endl;

	//Make a default assignment of one SmartArray object to another
	SmartArray L4;
	cout << "Default L4 object created which is " << L4 << endl;
	L4 = L3;
	cout << "After assigning L3 to L4 is " << L4 << endl;

	//Modify an element of L4
	L4[2] = 19;
	cout << "After modifying an element of L4, now L4 is " << L4 << endl;
	cout << "Interestingly L3 is also modified and is " << L3 << endl;

	L4 = L4;
	cout << "After assigning L4 to L4, now L4 is " << L4 << endl;

	SmartArray L5, L6, L7;
	L6 = L5 = L7 = L4;
	cout << "L5 is " << L5 << endl;
	cout << "L6 is " << L6 << endl;
	cout << "L7 is " << L7 << endl;

	system("pause");
	return 0;
}
