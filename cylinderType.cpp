/*
cylinderType.cpp
*/

#include <iostream>
#include <iomanip>
#include "circleType.h"
#include "cylinderType.h"

using namespace std;

void cylinderType::setHeight(double h)
{
	if (h >= 0)
		height = h;
	else
		height = 0;
}

double cylinderType::getHeight()
{
	return height;
}

double cylinderType::cylinderDiaM()
{
	return 2 * getRadius(); 
}

double cylinderType::baseArea()
{
	return area(); 
	//circle area is base area. 
}

double cylinderType::latSurArea()
{
	return 2 * 3.1416 * getRadius() * getHeight(); 
}

double cylinderType::totalSurArea()
{
	return circumference() * (getRadius() + getHeight()); 
}

double cylinderType::cylinderVolume()
{
	return baseArea() * getHeight(); 
}

//constructor 
cylinderType::cylinderType(double h)
{
	setHeight(h); 
}
