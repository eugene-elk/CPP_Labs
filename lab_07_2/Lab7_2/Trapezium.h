#pragma once
#include "Interface.h"

using namespace std;

class Trapezium : public GeoFig, public PhysObject, public Printable, public DialogInitiable, public BaseCObject
{
private:
	double SideA, SideB, Height;
	double Mass;
	Vector2D ObjectPosition;

public:
	//Paralel parametrs
	Trapezium();
	Trapezium(double sideA, double sideB, double corner, Vector2D position);
	Trapezium(double sideA, double sideB, double corner);

	//GeoFig
	double square() override;
	double perimeter() override;

	//PhysObject
	double mass() const override;
	Vector2D position() override;
	bool operator== (const PhysObject& ob) const override;
	bool operator< (const PhysObject& ob) const override;

	//Printable
	void draw() override;

	//DialogInitiable 
	void initFromDialog() override;

	//BaseCObject
	const std::string classname() override;
	unsigned int size() override;
};