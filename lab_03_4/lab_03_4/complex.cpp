#include "complex_names.h"

Complex::operator double()
{
	double res;
	res = sqrt((x*x) + (y*y));
	return res;
}

Complex operator * (Complex a, Complex b)
{
	Complex Res;
	Res.x = (a.x*b.x) - (a.y*b.y);
	Res.y = (b.x*a.y) + (a.x*b.y);
	return Res;
}

Complex operator + (Complex a, Complex b)
{
	Complex Res;
	Res.x = a.x + b.x;
	Res.y = a.y + b.y;
	return Res;
}

Complex operator * (Complex a, double b)
{
	Complex Res;
	Res.x = a.x * b;
	Res.y = a.y * b;
	return Res;
}