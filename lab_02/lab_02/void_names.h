#pragma once
#include <iostream>

namespace tasks
{
	struct complex
	{
		double real;
		double imagine;
	};
	struct matrix
	{
		double values[3][3];
	};
	void out(matrix mtr);
	void void2(int* a, int* plus);
	void void7(int* x);
	void void10(complex* cmplx);
	void void15(matrix* mtrx, double* x);

	void void2(int& a, int& plus);
	void void7(int& x);
	void void10(complex& cmplx);
	void void15(matrix& mtrx, double& x);
}