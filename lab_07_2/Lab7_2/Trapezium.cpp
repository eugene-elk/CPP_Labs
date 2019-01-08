#pragma once
#include "Interface.h"
#include "Trapezium.h"
#include <iostream>

using namespace std;

Trapezium::Trapezium()
{
}

Trapezium::Trapezium(double sideA, double sideB, double height, Vector2D position)
{
	if(sideA < sideB)
	{
		SideA = sideA;
		SideB = sideB;
	}
	else
	{
		SideA = sideB;
		SideB = sideA;
	}
	Height = height;
	ObjectPosition = position;
}
Trapezium::Trapezium(double sideA, double sideB, double height)
{
	if(sideA < sideB)
	{
		SideA = sideA;
		SideB = sideB;
	}
	else
	{
		SideA = sideB;
		SideB = sideA;
	}
	Height = height;
	Vector2D position;
	position.x = 0;
	position.y = 0;
	ObjectPosition = position;
}
double Trapezium::square()
{
	return (0.5 * (SideA + SideB) * Height);
}

double Trapezium::perimeter()
{
	return (SideA + SideB + 2*sqrt( (((SideB-SideA)/2)*((SideB-SideA)/2)) + (Height*Height) ));
}
double Trapezium::mass() const
{
	return 10.0;
}
Vector2D Trapezium::position()
{
	return ObjectPosition;
}
bool Trapezium::operator== (const PhysObject& ob) const
{
	return mass() == ob.mass();
}
bool Trapezium::operator< (const PhysObject& ob) const
{
	return mass() < ob.mass();
}
void Trapezium::draw()
{
	cout << classname() << " (" << SideA << "; " << SideB << "; " << Height << ") " << "\n";
}
void Trapezium::initFromDialog()
{
	cout << "Input Sides and Height: ";
	cin >> SideA >> SideB >> Height >> ObjectPosition.x >> ObjectPosition.y;
}
const std::string Trapezium::classname()
{
	return "Trapezium";
}
unsigned int Trapezium::size()
{
	return 8 * 6;
}