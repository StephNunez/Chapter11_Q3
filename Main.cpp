/*
Created by Stephanie Nunez
CSIS 223
Professor DeLay
Chapter 11
Question 3

Main.cpp
*/

#include <iostream>
#include <iomanip>
#include "circleType.h"
#include "cylinderType.h"

using namespace std;

int main()
{
	//sections of code from pg 692

	circleType circle1; 
	cylinderType cylinderA; 
	double radius = 0, height; 
	
	cout << fixed << showpoint << setprecision(2); 

	cout << "Circle 1 radius: " << circle1.getRadius()
		<< ", area: " << circle1.area() << ", circumference: " << circle1.circumference();
	cout << endl << endl;
	
	circle1.print(radius); 

	cout << endl << "Enter the radius of the cylinder: " << endl;
	cin >> radius;
	cout << endl; 

	cylinderA.setRadius(radius); 
	cylinderA.getRadius(); 
	
	cout << "Enter the height of the cylinder: " << endl;
	cin >> height;
	cout << endl; 

	cout << left << setw(40) << "Radius is: " << radius << endl;
	cout << left << setw(40) << "Height is: " << height << endl;

	cylinderA.setHeight(height);
	cylinderA.getHeight(); 

	cout << endl; 
	cout << left << setw(40) << "The diameter of the cylinder is: " << cylinderA.cylinderDiaM() << endl;

	cout << left << setw(40) << "The base area of the cylinder is: " << cylinderA.baseArea() << endl; 
	cout << left << setw(40) << "The lateral surface area is: " << cylinderA.latSurArea() << endl; 
	cout << left << setw(40) << "The total surface area is: " << cylinderA.totalSurArea() << endl; 
	cout << left << setw(40) << "The volume of the cylinder is: " << cylinderA.cylinderVolume() << endl; 

	return 0; 
}