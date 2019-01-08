#include <math.h>
#include <iostream>
#include <locale.h>
#include "func.h"
#include "type.h"

// Course: Программирование (C++)
// Lab 01. Использование пространства имен
// Student: Лосицкий Е.И. Group: M3105
// Teacher: Повышев В.В.
// Created 19.02.2017
// Description: решение квадратного уравнения с использованием пространства имен

using namespace QuadEquation;

int main()
{
	setlocale(LC_ALL, "Rus");
	coeff equation1;
	float x;
	printf("Введите коэффициенты уравнения\n");
	scanf("%f %f %f", &equation1.a, &equation1.b, &equation1.c);
	roots(equation1);
	printf("Введите точку\n");
	scanf("%f", &x);
	printf("Значение функции в заданной точке:\n%f\n", value(equation1, x));
	system("pause");
	return 0;
}