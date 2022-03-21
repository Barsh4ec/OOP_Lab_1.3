#pragma once
#include <string>
#include <sstream>
using namespace std;

class Vector3D
{
private:
	double x, y, z;
public:
	double GetX() const { return x; }
	double GetY() const { return y; }
	double GetZ() const { return z; }
	void SetX(double value) { x = value; }
	void SetY(double value) { y = value; }
	void SetZ(double value) { z = value; }

	void Init(double, double, double);
	void Read();
	string ToString() const;

	void Display() const;
	friend Vector3D SumOfVectors(Vector3D l, Vector3D r);
	friend Vector3D RiznOfVectors(Vector3D l, Vector3D r);
	friend double DobOfVectors(Vector3D l, Vector3D r);
};	