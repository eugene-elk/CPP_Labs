// Course: Программирование (C++)
// Lab 03
// Student: Лосицкий Е.И. Group: M3105
// Teacher: Повышев В.В.
// Created 19.02.2017
// Description: Использование ссылок и указателей при работе с процедурами

#include <iostream>
#include "complex_names.h"
#include "array_names.h"

using namespace std;

int main()
{
	cout << "COMPLEX" << endl;
	Complex C1 = {1.0, 3.2};
	Complex C2 = {2.0, 0.7};
	Complex C3; 
	double d1 = 1.5;
	cout << "Complex 1: " << C1.x << " " << C1.y << endl;
	cout << "Complex 2: " << C2.x << " " << C2.y << endl;
	cout << "Double: " << d1 << endl;
	C3 = C1 * C2;
	cout << "Complex 1 * Complex 2: " << C3.x << " " << C3.y << endl;
	C3 = C1 * d1;
	cout << "Complex 1 * double:    " << C3.x << " " << C3.y << endl;
	C3 = C1 + C2;
	cout << "Complex 1 + Complex 2: " << C3.x << " " << C3.y << endl;
	d1 = double(C1);
	cout << "Complex 1 len:         " << d1 << endl;
	
	cout << endl << "ARRAY" << endl;
	Array A1, A2, A3;
	A1.A.push_back(1); A1.A.push_back(2); A1.A.push_back(3); A1.A.push_back(4); A1.A.push_back(5);    
	A2.A.push_back(1); A2.A.push_back(2); A2.A.push_back(4); A2.A.push_back(6); A2.A.push_back(8); A2.A.push_back(10);
	cout << "Array 1: ";
	for (int i = 0; i < A1.A.size(); i++)
	{
		cout << A1.A[i] << " ";
	}
	cout << endl << "Array 2: ";
	for (int i = 0; i < A2.A.size(); i++)
	{
		cout << A2.A[i] << " ";
	}
	cout << endl;

	bool res = (A1 > A2);
	cout << "A1 > A2:  " << res << endl;
	res = (A1 < A2);
	cout << "A1 < A2:  " << res << endl;
	res = (A1 == A2);
	cout << "A1 == A2: " << res << endl;
	res = (A1 != A2);
	cout << "A1 != A2: " << res << endl;

	A1 = A1 + A2;
	cout << "Array 1 + Array 2: " << endl;
	for (int i = 0; i < A1.A.size(); i++)
	{
		cout << A1.A[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}