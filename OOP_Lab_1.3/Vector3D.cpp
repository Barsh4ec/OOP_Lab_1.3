#include "Vector3D.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

void Vector3D::Init(double xx, double yy, double zz) {
	x = xx;
	y = yy;
	z = zz;
}

void Vector3D::Read() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "¬вед≥ть координати вектора" << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "z = "; cin >> z;
}

string Vector3D::ToString() const {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	stringstream sout;
	sout << "вектор = (" << x << " , " << y << " , " << z << ")" << endl;
	return sout.str();
}

void Vector3D::Display() const {
	cout << ToString();
}

Vector3D SumOfVectors(Vector3D l, Vector3D r) {
	Vector3D t;
	t.x = l.x + r.x;
	t.y = l.y + r.y;
	t.z = l.z + r.z;
	return t;
}

Vector3D RiznOfVectors(Vector3D l, Vector3D r) {
	Vector3D t;
	t.x = l.x - r.x;
	t.y = l.y - r.y;
	t.z = l.z - r.z;
	return t;
}

double DobOfVectors(Vector3D l, Vector3D r) {
	Vector3D t;
	t.x = l.x * r.x;
	t.y = l.y * r.y;
	t.z = l.z * r.z;
	return t.x + t.y + t.z;
}
