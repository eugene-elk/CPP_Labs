#pragma once

#include<iostream>

using namespace std;

struct Complex
{
	double x, y;
	operator double();
};

Complex operator * (Complex, Complex); //Complex * Complex
Complex operator * (Complex, double); //Complex * double
Complex operator + (Complex, Complex); //Complex + Complex
