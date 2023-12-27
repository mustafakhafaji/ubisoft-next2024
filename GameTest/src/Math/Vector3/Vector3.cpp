#include <cmath>
#include "Vector3.h"

Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3 Vector3::operator+(const Vector3& other)
{
	return Vector3(
		this->x + other.x,
		this->y + other.y,
		this->z + other.y
	);
}

Vector3 Vector3::operator-(const Vector3& other)
{
	return Vector3(
		this->x - other.x,
		this->y - other.y,
		this->z - other.y
	);
}

float Vector3::Length()
{
	return sqrt(
		this->x * this->x + 
		this->y * this->y + 
		this->z * this->z
	);
}