#include <iostream>
using namespace std;

class SmartArray
{
private:
	int *A;
	int size;

public:
	//Constructors
	SmartArray();
	SmartArray(const int *A, const int &size);

	//Getter, Setter, operators and other function
	int getSize()  const;
	int& operator[] (const int &index)  const;
	void append(const int &e);
	friend ostream& operator << (ostream &outputStream, const SmartArray &L);

	SmartArray(const SmartArray &L);    //overloaded copy
	~SmartArray();     // Destructor
	SmartArray& operator = (const SmartArray&L);
};
