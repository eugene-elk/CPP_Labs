#pragma once
#include "Interface.h"

using namespace std;

class Round : public GeoFig, public PhysObject, public Printable, public DialogInitiable, public BaseCObject
{
private:
	double Radius;
	double Mass;
	Vector2D ObjectPosition;

public:
	//Ellipse parametrs
	Round();
	Round(double Radius, Vector2D position);
	Round(double Radius);

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