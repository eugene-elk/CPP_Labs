#include "functions.h"
#include <iostream>

using namespace std;

template<class T>
void change(T & a, T & b) 
{
    T c = a;
	a = b;
	b = c;
}

//template <class T>
Matrix::Matrix(int n, int m)
{
	matrix = new double*[m]; 
	for(int i = 0; i < m; i++) 
		matrix[i] = new double[n];
	sizeN = n;
	sizeM = m;
}

//template <class T>
void Matrix::get(int x, int y)
{
	if ((x >= sizeN) || (y >= sizeM))
	{
		throw(-1);
	}
	cout << "Element on position " << x << " " << y << " is " <<  matrix[x][y] << endl;
}

//template <class T>
void Matrix::set(int x, int y, double value)
{
	if ((x >= sizeN) || (y >= sizeM))
	{
		throw(-1);
	}
	matrix[x][y] = value;
	cout << "Element on position " << x << " " << y << " set " <<  matrix[x][y] << endl;
}