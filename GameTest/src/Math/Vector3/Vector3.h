#pragma once

class Vector3
{
public:

	float x, y, z;

	Vector3(float x, float y, float z);

	Vector3 operator+(const Vector3 &other);

	Vector3 operator-(const Vector3 &other);

	float Length();
};