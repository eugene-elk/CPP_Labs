// Course: Программирование (C++)
// Lab 02. Передача значения по ссылке.
// Student: Лосицкий Е.И. Group: M3105
// Teacher: Повышев В.В.
// Created 19.02.2017
// Description: Использование ссылок и указателей при работе с процедурами

#include <math.h>
#include <iostream>
#include <locale.h>
#include "void_names.h"

using namespace std;
using namespace tasks;

int main()
{
	setlocale(LC_ALL, "Rus");

	//------------------------------------------------------------
	int in1, in2;
	cout << "Increase" << endl;

	in1 = 2; in2 = 3;
	cout << in1 << " " << in2 << endl;
	void2(&in1, &in2);
	cout << in1 << " " << in2 << endl;
	in1 = 2; in2 = 3;
	cout << in1 << " " << in2 << endl;
	void2(in1, in2);
	cout << in1 << " " << in2 << endl;

	//------------------------------------------------------------
	int x;
	cout << endl << "Change sign" << endl;

	x = 5;
	cout << x << endl;
	void7(&x);
	cout << x << endl;
	x = 5;
	cout << x << endl;
	void7(x);
	cout << x << endl;

	//------------------------------------------------------------
	complex comp;
	cout << endl << "Complex" << endl;
	comp.real = 1.2; comp.imagine = 3.5;
	cout << comp.real << ' ' << comp.imagine << endl;
	void10(&comp);
	cout << comp.real << ' ' << comp.imagine << endl;
	comp.real = 1.2; comp.imagine = 3.5;
	cout << comp.real << ' ' << comp.imagine << endl;
	void10(comp);
	cout << comp.real << ' ' << comp.imagine << endl;

	//------------------------------------------------------------
	matrix mtr;
	double n;
	cout << endl << "Matrix" << endl;
	n = 1.5;
	mtr.values[0][0] = 0; mtr.values[0][1] = 2; mtr.values[0][2] = 4;
	mtr.values[1][0] = 1; mtr.values[1][1] = 2; mtr.values[1][2] = 3;
	mtr.values[2][0] = 2; mtr.values[2][1] = 1; mtr.values[2][2] = 2;
	out(mtr);
	void15(&mtr, &n); 
	out(mtr);
	n = 1.5;
	mtr.values[0][0] = 0; mtr.values[0][1] = 2; mtr.values[0][2] = 4;
	mtr.values[1][0] = 1; mtr.values[1][1] = 2; mtr.values[1][2] = 3;
	mtr.values[2][0] = 2; mtr.values[2][1] = 1; mtr.values[2][2] = 2;
	out(mtr);
	void15(mtr, n);
	out(mtr);

	system("pause");
	return 0;
}