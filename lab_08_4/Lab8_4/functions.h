#pragma once

template<class T>
void change(T & a, T & b);

//template <class T>
class Matrix 
{
private:
	double ** matrix;
	int sizeN, sizeM;
public:
	Matrix(){};
	Matrix(int n, int m);
	void get(int x, int y);
	void set(int x, int y, double value);
};