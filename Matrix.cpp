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
		matRows = new Vec[4]
		{
			vector1, vector2, vector3, vector4
		};
		getColumns();
	}

	//creates column for good easy multiplication
	Vec* getColumns()
	{
		matCols = new Vec[4]
		{
			Vec(matRows[0].get(0), matRows[1].get(0), matRows[2].get(0), matRows[3].get(0)),
			Vec(matRows[0].get(1), matRows[1].get(1), matRows[2].get(1), matRows[3].get(1)),
			Vec(matRows[0].get(2), matRows[1].get(2), matRows[2].get(2), matRows[3].get(2)),
			Vec(matRows[0].get(3), matRows[1].get(3), matRows[2].get(3), matRows[3].get(3)) 
		};
	}


	Matrix::~Matrix()
	{
	}
};