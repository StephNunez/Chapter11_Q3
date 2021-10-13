/*
Defined in Chapter 10
pg 691
Example 10-8

circleType.h
*/

#pragma once
#ifndef CIRCLETYPE_H
#define CIRCLETYPE_H

//Base Class 
class circleType  
{
public: 
	void setRadius(double r);
		//Function to set the radius.
		//Postcondition: if (r >= 0) radius = r;
			//otherwise radius = 0;
	
	double getRadius();
		//Function to return the radius.
		//Postcondition: the value of radius is returned.

	double area();
		//Function to return the are of a circle.
		//Postcondition: area is calculated and returned. 

	double circumference();
		//Function to return the circumference of a circle.
		//Postcondition: circumference is calculated and return.

	//Add the function print
	void print(double r);
		//Function to output radius, area, and circumference of a circle.
		//Postcondition: radius, area, and circumference are shown. 

	circleType(double r = 0);
		//Constructor with a default parameter.
		//Radius is set according to the parameter.
		//Postcondition: radius = r; 
private:
	double radius;
};

#endif //circleType.h 