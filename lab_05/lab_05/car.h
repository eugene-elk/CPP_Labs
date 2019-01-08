#pragma once
#include "Vechile.h"

namespace Car {
	class Car : public Vechile::Vechile {
	private:
		int fuel;
		int fuelPerMove;
	public:
		Car();
		void AddFuel(int);
		void SetFuelPerKM(int);
		void Move(int) override;
	};
}