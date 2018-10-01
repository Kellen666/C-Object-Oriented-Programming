#include<iostream>
#include<cmath>
using namespace std;

class Point
{
private:
	float x, y;

public:

	Point();
	Point(float newX, float newY);
	float getX();
	float getY();
	void setX(float newX);
	void setY(float newY);
	void print();
};

class Line
{
private:

	Point start;
	Point end;

public:

	Line();
	Line(Point s, Point e);

	Point getStartPoint();
	Point getEndPoint();

	void setStartPoint(Point s);
	void setEndPoint(Point e);

	double length();
	bool isLonger(Line b);
	void print();
};

float Point::getX()
{
	return x;
}

float Point::getY()
{
	return y;
}

void Point::setX(float newX)
{
	x = newX;
}

void Point::setY(float newY)
{
	y = newY;
}

void Point::print()
{
	cout << "(" << getX() << ", " << getY() << ")";
}

Point::Point(float newX, float newY)
{
	setX(newX);
	setY(newY);
}

Point::Point()
{
	setX(0.0);
	setY(0.0);
}


Point Line::getStartPoint()
{
	return start;
}

Point Line::getEndPoint()
{
	return end;
}

void Line::setStartPoint(Point s)
{
	start = s;
}

void Line::setEndPoint(Point e)
{
	end = e;
}

Line::Line(Point s, Point e)
{
	setStartPoint(s);
	setEndPoint(e);
}

Line::Line()
{
}

void Line::print()
{
	start.print();
	cout << "---";
	end.print();
}

double Line::length()
{
	float xdiff = end.getX() - start.getX();
	float ydiff = end.getY() - start.getY();
	
	return sqrt(pow(xdiff,2) + pow(ydiff,2));
}

bool Line::isLonger(Line b)
{
	double linea = this->length();
	double lineb = b.length();
	
	if (linea > lineb)
	{
		return true;
	}
	
	return false;
} 


int main()
{
	//Test default constructor member function
	Line line1;
	
	//Test getStartPoint member function
	cout << "Start point of line is ";
	line1.getStartPoint().print();
	cout << endl;
	
	//Test getEndPoint member function
	cout << "End point of line is ";
	line1.getEndPoint().print();
	cout << endl;
	
	//Test setStartPoint member function
	Point p1(2, 5), p2(-1, -1);

	//Test setStartPoint member function
	line1.setStartPoint(p1);

	//Test setEndPoint member function
	line1.setEndPoint(p2);
	
	//Test print member function
	cout << "Now line1 is ";
	line1.print();
	cout << endl;
	
	//Test length member function
	cout << "The length of line1 is " << line1.length() << endl;


    // Test Point class
    
	/*
	Point *pointArray = new Point[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "Point P[" << i << "] = ";
		pointArray[i].print();
		cout << endl;
	}

	delete[] pointArray;
	*/
	
	/*
	Point p;
	Point &pRef = p;
	Point *pPtr = &p;

	p.setX(3.6);

	pRef.setY(-2.3);

	pPtr->setX(2.5);

	cout << "The point you created is ";

	p.print();

	pRef.print();
	
	pPtr->print();
	*/

	/*
	Point p1, p2(1.0, 2.0);

	cout << "The X-coordinate of Point p1 is " << p1.getX() << endl;
	cout << "The Y-coordinate of point p1 is " << p1.getY() << endl;
	//p.setX(3.5);
	//p.setY(2.2);

	cout << "The X-coordinate of Point p2 is " << p2.getX() << endl;
	cout << "The Y-coordinate of point p2 is " << p2.getY() << endl;
	
	cout << "Point p1 = "; p1.print(); cout << endl;
	cout << "Point p2 = "; p2.print(); cout << endl;
	*/
	cout << endl;

	system("Pause");
	return 0;
}
