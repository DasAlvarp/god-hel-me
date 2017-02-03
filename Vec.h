#pragma once
class Vec
{
public:
	Vec(float, float, float);
	Vec(float, float, float,float);
	~Vec();
	Vec multiply(float);
	float* multiplyA(float);
	float dProd(Vec);

};

