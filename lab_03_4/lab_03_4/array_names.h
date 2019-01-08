#pragma once

#include <iostream>
#include <vector>

using namespace std;

struct Array
{
	vector<int> A;
};

Array operator + (Array, Array); 
bool operator == (Array, Array); 
bool operator != (Array, Array);
bool operator > (Array, Array); 
bool operator < (Array, Array);