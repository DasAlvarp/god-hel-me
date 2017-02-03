#include "Vec.h"
#include <cstdarg>
#include <list>
#include <iostream>
#include "math.h""

class Vec
{
	float values[4];

	int len = 3;
	float magnitude;
	float* normal;

	//vector3 is like a vector4 for easy math.
	Vec::Vec(float val1, float val2, float val3)
	{
		values[0] = val1;
		values[1] = val2;
		values[2] = val3;
		values[3] = 0.0;
		magnitude = sqrt(val1 * val1 + val2 * val2 + val3 * val3);
		normal = multiplyA(1 / magnitude);

	}

	//vector4
	Vec::Vec(float val1, float val2, float val3, float val4)
	{
		len = 4;
		values[0] = val1;
		values[1] = val2;
		values[2] = val3;
		values[3] = val4;
		magnitude = sqrt(val1 * val1 + val2 * val2 + val3 * val3 + val4 * val4);
		normal = multiplyA(1 / magnitude);

	}

	//multiply for all the other thin gs
	Vec::Vec multiply(float scalar)
	{
		if (len == 3)
		{
			return Vec(values[0] * scalar, values[1] * scalar, values[2] * scalar);
		}
		else if (len == 4)
		{
			return Vec(values[0] * scalar, values[1] * scalar, values[2] * scalar, values[3] * scalar);
		}
	}

	//multiplies a scalar into an array (basically for normals)
	float* multiplyA(float scalar)
	{
		if (len == 3)
		{
			return new float[4]{ values[0] * scalar, values[1] * scalar, values[2] * scalar,0};
		}
		else if (len == 4)
		{
			return new float[4]{ values[0] * scalar, values[1] * scalar, values[2] * scalar, values[3] * scalar };
		}
	}

	//dot product
	float dProd(Vec pro)
	{
		return values[0] * pro.values[0] + values[1] * pro.values[1] + values[2] * pro.values[2] + values[3] * pro.values[3];
	}

	Vec::~Vec()
	{
	}
};
//vector class:
//xbyx class
//quaternion class
//matrixXmatrix