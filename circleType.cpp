/*
Definitions of class cirlceType
pg 691
Example 10-8

circleType.cpp 
*/


#include <iostream>
#include <iomanip>
#include <string>
#include "circleType.h"
#include "cylinderType.h"

using namespace std;

void circleType::setRadius(double r)
{
	if (r >= 0)
		radius = r;
	else
		radius = 0;
}

double circleType::getRadius()
{ 
	return radius;
}

double circleType::area()
{
	return 3.146 * radius * radius;
}

double circleType::circumference()
{
	return 2 * 3.1416 * radius;

}

//Add the function print
void circleType::print(double r)
{
	cout << "Enter the radius of the circle: " << endl; 
	cin >> radius; 
	cout << endl << left << setw(40) << "The radius of the circle is: ";
	cout << getRadius();
	cout << endl;

	cout << left << setw(40) << "The area of the circle is: "; 
	cout << area();
	cout << endl; 

	cout << left << setw(40) << "The circumference of the circle is: ";
	cout << circumference(); 
	cout << endl; 

}

circleType::circleType(double r)
{
	setRadius(r);
}

