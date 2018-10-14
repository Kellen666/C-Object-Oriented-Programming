#include "SmartArrayExample.h"
#include <iostream>
using namespace std;

SmartArray::SmartArray()
{
	this->size = 0;
}

SmartArray::SmartArray(const int *A, const int &size)
{
	this->size = size;
	if (this->getsize() > 0)
	{
		this->A = new int[this->getsize()];
		for (int i = 0; i < this->getsize(); i++)
			this->A[i] = A[i];
	}
}

int SmartArray::getsize() const
{
	return this->size;
}

int& SmartArray::operator[](const int &index)  const
{
	if (index >= 0 && index < this->getsize())
		return this->A[index];
	else
	{
		cout << "Error! Index out of bounds." << endl;
		system("exit");
	}
}

void SmartArray::append(const int &e)
{
	int *temp = new int[this->getsize() + 1];

	for (int i = 0; i < this->getsize(); i++)
		temp[i] = this->A[i];

	temp[this->getsize()] = e;

	if (this->getsize() > 0)
		delete[] this->A;

	this->A = temp;
	this->size += 1;
}

ostream& operator << (ostream &outputStream, const SmartArray &L)
{
	outputStream << "[";
	for (int i = 0; i < L.getsize() - 1; i++)
		outputStream << L[i] << ", ";
	if (L.getsize() > 0)
		outputStream << L[L.getsize() - 1];
	outputStream << "]";

	return outputStream;
}

SmartArray::SmartArray(const SmartArray &L)  // Copy Constructor
{
	this->size = L.getSize();
	if (this->getSize() > 0)
	{
		this->A = new int[this->getSize()];
		for (int i = 0; i < this->getSize(); i++)
			this->A[i] = L[i];
	}
}

SmartArray::~SmartArray()     // deconstructor
{
	if (this->getSize() > 0)
	{
		delete[] this->A;
		this->size = 0;
	}
}

SmartArray& SmartArray::operator=(const SmartArray &L)
{
	//Delete the left hand side object's memory
	this->~SmartArray();
	//Now copy the right hand side to the left
	this->size = L.getSize();
	if (this->getSize() > 0)
	{
		this->A = new int[this->getSize()];
		for (int i = 0; i < this->getSize(); i++)
			this->A[i] = L[i];
	}
	return *this;
}
