#include "array_names.h"

Array operator + (Array a1, Array a2)
{
	for(int i = 0; i < a2.A.size(); i++)
	{
		a1.A.push_back(a2.A[i]);
	}
	return a1;
}

bool operator == (Array a1, Array a2)
{
	if(a1.A.size() == a2.A.size())
		return true;
	else
		return false;
}

bool operator != (Array a1, Array a2)
{
	if(a1.A.size() == a2.A.size())
		return false;
	else
		return true;
}

bool operator > (Array a1, Array a2)
{
	if(a1.A.size() > a2.A.size())
		return true;
	else
		return false;
}

bool operator < (Array a1, Array a2)
{
	if(a1.A.size() < a2.A.size())
		return true;
	else
		return false;
}