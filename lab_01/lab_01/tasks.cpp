#pragma once

#include "func.h"
#include "type.h"
#include <math.h>
#include <iostream>

namespace QuadEquation
{
	float value(coeff equation, float point)
	{
		return ((equation.a)*(equation.a)*point) + ((equation.b)*point) + (equation.c);
	}

	void roots(coeff eq)
	{
		float D = (eq.b)*(eq.b) - 4*(eq.a)*(eq.c);
		if (D < 0)
			printf("Нет решений\n");
		else
		{
			float res1 = ((-1)*(eq.b) + sqrt(D))/(2*eq.a);
			float res2 = ((-1)*(eq.b) - sqrt(D))/(2*eq.a);
			if (D == 0)
				printf("Корень уравнения:\n%f\n", res1);
			else
				printf("Корни уравнения:\n%f %f\n", res1, res2);
		}
	}
}