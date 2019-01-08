#include <iostream>
#include "Car.h"
#include "Vechile.h"

using namespace std;

void printLog(vector<Vechile::Point> log)
{
	for(int i = 0; i < log.size(); i++ )
	{
		cout << log[i].x << " " << log[i].y << " " << log[i].z << endl;
	}
}


int main()
{
	cout << "VECHILE" << endl;
	Vechile::Vechile vech;
	vech.SetDirection(3, 4, 5);
	vech.Move(1);
	vech.Move(3);
	printLog(vech.GetMoveLog());

	cout << "CAR" << endl;
	Car::Car car;
	car.SetDirection(3, 4, 5);
	car.Move(4);
	printLog(car.GetMoveLog());
	car.SetFuelPerKM(2);
	car.AddFuel(10);
	car.Move(4);
	printLog(car.GetMoveLog());

	system("pause");

 	return 0;
}