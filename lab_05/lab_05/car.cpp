#include "Car.h"
#include <iostream>

using namespace std;

namespace Car {
	Car::Car()
	{
		fuel = 0;
		fuelPerMove = 0;
		cout << "car fuel now: " << fuel << endl;
		cout << "car consumption: " << fuelPerMove << endl;
	}
	void Car::AddFuel(int get_fuel)
	{
		fuel += get_fuel;
		cout << "car fuel now: " << fuel << endl;
	}
	void Car::SetFuelPerKM(int consumption)
	{
		fuelPerMove = consumption;
		cout << "car consumption: " << fuelPerMove << endl;
	}
	void Car::Move(int time)
	{
		if(fuel >= fuelPerMove * time && fuelPerMove > 0)
		{
			fuel -= fuelPerMove;
			Vechile::Move(time);
		}
		else
		{
			cout << "car can't move" << endl;
		}
	}
}