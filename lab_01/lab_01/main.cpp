#include <math.h>
#include <iostream>
#include <locale.h>
#include "func.h"
#include "type.h"

// Course: ���������������� (C++)
// Lab 01. ������������� ������������ ����
// Student: �������� �.�. Group: M3105
// Teacher: ������� �.�.
// Created 19.02.2017
// Description: ������� ����������� ��������� � �������������� ������������ ����

using namespace QuadEquation;

int main()
{
	setlocale(LC_ALL, "Rus");
	coeff equation1;
	float x;
	printf("������� ������������ ���������\n");
	scanf("%f %f %f", &equation1.a, &equation1.b, &equation1.c);
	roots(equation1);
	printf("������� �����\n");
	scanf("%f", &x);
	printf("�������� ������� � �������� �����:\n%f\n", value(equation1, x));
	system("pause");
	return 0;
}