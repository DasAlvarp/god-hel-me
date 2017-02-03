#include "Matrix.h"
#include "Vec.h"
#include <iostream>

class Matrix
{
	Vec* matRows;
	Vec* matCols;

	//only for 4x4 matrices because I am lazy
	Matrix::Matrix(Vec vector1, Vec vector2, Vec vector3, Vec vector4)
	{
		matRows = new Vec[4]{ vector1, vector2, vector3, vector4};
	}

	Vec* getColumns()
	{
		for (int x = 0; x < a; x++)
		{
			for (int y = 0; y < 4; y++)
			{

			}
		}
	}


	Matrix::~Matrix()
	{
	}
};