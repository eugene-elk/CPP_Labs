#include <iostream>
#include "Trapezium.h"
#include "Round.h"
#include <vector>

using namespace std;

Vector2D getCenter(Vector2D first, Vector2D second)
{
	Vector2D center;
	center.x = (first.x + second.x) / 2;
	center.y = (first.y + second.y) / 2;
	return center;
}

template <class T>
void printPosition(T data)
{
	cout << " (" << data.x << "; " << data.y << ")\n";
}

template <class T>
void printInfo(vector<T> data)
{
	for (T element : data)
	{
		element.draw();
	}
	cout << endl;
}

template <class T>
double square(vector<T> data)
{
	double totalSq = 0;
	for(unsigned int i = 0; i < data.size(); i++)
	{
		totalSq += data[i].square();
	}
	/*
	for (T element : data)
	{
		totalSq += element.square();
	}
	*/
	return totalSq;
}

template <class T>
double perimeter(vector<T> data)
{
	double totalPerimeter = 0;
	for (T element : data)
	{
		totalPerimeter += element.perimeter();
	}
	return totalPerimeter;
}

template <class T>
Vector2D getCenter(vector<T> data)
{
	Vector2D center = data[0].position();
	for (T element : data)
	{
		center = getCenter(center, element.position());
	}
	return center;
}

template <class T>
double space(vector<T> data)
{
	double totalSpace = 0;
	for (T element : data)
	{
		totalSpace += element.size();
	}
	return totalSpace;
}

int main()
{
	vector<Trapezium> traps(1);
	vector<Round> rounds(1);

 	cout << "Add elements (1 - trapezium, 2 - round):" << endl;
	int mod = 1;
	while (mod == 1 || mod == 2)
	{
		double a, b, c;
		cin >> mod;
		if (mod == 1)
		{
			cin >> a >> b >> c;
			traps.push_back(Trapezium(a, b, c));
		}
		if (mod == 2)
		{
			cin >> a;
			rounds.push_back(Round(a));
		}
	}

	Vector2D p;
	p.x = 3;
	p.y = 4;
	traps[0] = Trapezium(3, 4, 2, p);
	p.x = 7;
	p.y = 8;
	rounds[0] = Round(3, p);

	cout << endl;
	printInfo(rounds);
	printInfo(traps);

	cout << "Total square = " << square(rounds) + square(traps) << endl;
	cout << "Total perimeter = " << perimeter(rounds) + perimeter(traps) << endl;
	printPosition(getCenter(getCenter(rounds), getCenter(traps)));

	cout << "Total space = " << space(traps) + space(rounds) << endl;

	system("pause");
	return 0;
}