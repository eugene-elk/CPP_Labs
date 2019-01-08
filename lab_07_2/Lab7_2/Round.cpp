#include "Round.h"
#include <cmath>
#include <iostream>
#include <functional>

Round::Round()
{
}

Round::Round(double rad, Vector2D position)
{
	Radius = rad;
	ObjectPosition = position;
}

Round::Round(double rad)
{
	Radius = rad;
	Vector2D position;
	position.x = 0;
	position.y = 0;
	ObjectPosition = position;
}

double Round::square()
{
	return 3.1415 * Radius * Radius;
}

double Round::perimeter()
{
	return (2 * 3.1415 * Radius);
}

double Round::mass() const
{
	return 5;
}

Vector2D Round::position()
{
	return ObjectPosition;
}

bool Round::operator==(const PhysObject & ob) const
{
	return mass() == ob.mass();
}

bool Round::operator<(const PhysObject & ob) const
{
	return mass() < ob.mass();
}

void Round::draw()
{
	cout << classname() << " (" << Radius << ")\n";
}

void Round::initFromDialog()
{
	cout << "Input Radius: ";
	cin >> Radius >> ObjectPosition.x >> ObjectPosition.y;
}

const std::string Round::classname()
{
	return "Round";
}

unsigned int Round::size()
{
	return 8 * 4;
}