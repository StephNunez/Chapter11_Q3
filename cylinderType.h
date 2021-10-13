/*
cylinderType.h
*/

#pragma once
#ifndef CYLINDERTYPE_H
#define CYLINDERTYPE_H

//Derived Class
class cylinderType:public circleType
{
public:
	void setHeight(double h);
		//Function to set height of cylinder.
		//Postcondition: if (h >= 0) height = h;
			//otherwise radius = 0;

	double getHeight();
		//Function to return height;
		//Postcondition: the value of height is returned.

	double cylinderDiaM();
		//Function to calculate and return cylinder diameter. 
		//Postcondition: diameter is calculated and returned. 

	double baseArea();
		//Function to calculate and return area of base (circle area)
		//Postcondition: circleType::area()

	double latSurArea();
		//Function to calculate and return lateral surface area of cylinder
		//Postcondition: Lateral surface area is calculated and returned. 

	double totalSurArea();
		//Function to calculate total surface area of a cylinder.
		//Postcondition: total surface area is calculated and returned.

	double cylinderVolume();
		//Function to calculate volume of cylinder 
		//Postcondition: volume is calculated and returned. 

	cylinderType(double h = 0);
		//constructor
		//Postcondition: radius and height are set to 0. 

private:
	double height;

};

#endif