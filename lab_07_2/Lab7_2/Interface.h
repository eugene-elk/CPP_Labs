#pragma once
#include <string>
#include "Struct.h"

class GeoFig {
public:
	virtual double square() = 0;
	virtual double perimeter() = 0;
};

class PhysObject {
public:
	virtual double mass() const = 0;
	virtual Vector2D position() = 0;
	virtual bool operator== (const PhysObject& ob) const = 0;
	virtual bool operator< (const PhysObject& ob) const = 0;
};

class Printable {
public:
	virtual void draw() = 0;
};

class DialogInitiable {
	virtual void initFromDialog() = 0;
};

class BaseCObject {
public:
	virtual const std::string classname() = 0;
	virtual unsigned int size() = 0;
};