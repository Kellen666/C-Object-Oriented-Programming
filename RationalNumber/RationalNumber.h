class RationalNumber
{
private:
	int a, b;

public:

	//Constructors
	RationalNumber();
	RationalNumber(int x);
	RationalNumber(int x, int y);

	//Getters
	int getNumerator();
	int getDenominator();

	//Setters
	void setNumerator(int x);
	void setDenominator(int y);

	//Additional Member functions
	double toDouble();
	void standardize();
	void reduce();
	void print();
};
