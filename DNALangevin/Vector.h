#pragma once
#include<math.h>
template<typename T>
class Vector
{
	T x;
	T y;
	T z;
	T r;
	T theta;
	T phi;
public:
	Vector() :x(T(0)), y(T(0)), z(T(0)), r(T(0)), theta(T(0)), phi(T(0)) {}

	explicit Vector(T X, T Y, T Z):x(X), y(Y), z(Z) {
		if (T == double) {
			r = sqrt(x*x + y * y + z * z);
			theta = atan2(y, x);
			phi = acos(z / r);
		}
	}

	void setX(T &v);
	void setY(T &v);
	void setZ(T &v);
	Vec<T> getPolarCordinates();



	bool operator == (Vector V) {
		return (V.x == this->x && V.y = this->y && V.z = this->z) ? true : false;
	}

	Vector operator + (const Vector& V) {
		Vector A;
		A.x = this->x + V.x;
		A.y = this->y + V.y;
		A.z = this->z + V.z;
		return (A)
	}
	double operator * (const Vector& V) {
		double X = double(this->x) * double(V.x);
		double Y = double(this->y) * double(V.y);
		double Z = double(this->z) * double(V.z);
		return (X + Y + Z);
	}
	void operator += (const Vector& V) {
		Vector A = this;
		A.x = this->x + V.x;
		A.y = this->y + V.y;
		A.z = this->z + V.z;
		//return (A)
	}
	Vector operator = (const Vec<T>&V) {
		this->x = V.x;
		this->y = V.y;
		this->z = V.z;

		return this;
	}

	operator double() const {
		double X = double(x);
		double Y = double(y);
		double Z = double(z);
		return sqrt(X*X + Y * Y + Z * Z);
	}

	operator Vec<T>() const {
		Vec<T> r;
		r.x = this->x;
		r.y = this->y;
		r.z = this->z;
		return r;
	}

	Vector operator - () {
		this->x = -this->x;
		this->y = -this->y;
		this->z = -this->z;
		return Vector(this->x, this->y, this->z);
	}
	~Vector();
};

