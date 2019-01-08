#pragma once
#include "void_names.h"

namespace tasks
{

	void out(matrix mtr)
	{
		std::cout.setf(std::ios::fixed);
		std::cout.precision(2);
		for(int x = 0; x < 3; x++)
		{
			for(int y = 0; y < 3; y++)
			{
				std::cout << mtr.values[x][y] << " ";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	};
	
	void void2(int * a, int * plus)
	{
		*a += *plus;
	}
	void void2(int & a, int & plus)
	{
		a += plus;
	}

	void void7(int * x)
	{
		*x *= (-1);
	}
	void void7(int & x)
	{
		x *= (-1);
	}

	void void10(complex * cmplx)
	{
		cmplx->imagine *= (-1);
	}
	void void10(complex &cmplx)
	{
		cmplx.imagine *= (-1);
	}

	void void15(matrix * mtr, double * n)
	{
		for(int x = 0; x < 3; x++)
		{
			for(int y = 0; y < 3; y++)
			{
				mtr->values[x][y] *= *n;
			}
		}
	}
	void void15(matrix & mtr, double & n)
	{
		for(int x = 0; x < 3; x++)
		{
			for(int y = 0; y < 3; y++)
			{
				mtr.values[x][y] *= n;
			}
		}
	}
}