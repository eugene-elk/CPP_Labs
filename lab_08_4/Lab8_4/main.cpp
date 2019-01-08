#include <iostream>
#include <vector>

#include "functions.h";

using namespace std;

int main()
{
	double a1 = 2.3, b1 = 7.4;
	cout << a1 << " " << b1 << endl;
	change(a1, b1);
	cout << a1 << " " << b1 << endl;
	system("pause");

	//Matrix<double> newMatrix(3, 4);
	Matrix newMatrix(3, 4);
	cout << "SET" << endl;
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			try
			{
				newMatrix.set(i, j, i*0.1);
			}
			catch (int e)
			{
				cout << "Element " << i << " " << j << " doesn't exist" << endl;
			}
		}
	}
	cout << "GET" << endl;
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			try
			{
				newMatrix.get(i, j);
			}
			catch (int e)
			{
				cout << "Element " << i << " " << j << " doesn't exist" << endl;
			}
		}
	}
	system("pause");
}