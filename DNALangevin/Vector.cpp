#include "pch.h"
#include "Vector.h"



template<typename T>
void Vector<T>::setX(T & v)
{
	this->x = v;
}

template<typename T>
void Vector<T>::setY(T & v)
{
	this->y = v;
}

template<typename T>
void Vector<T>::setZ(T & v)
{
	this->z = v;
}

template<typename T>
Vec<T> Vector<T>::getPolarCordinates()
{
	Vec<T> p;
	p.x = r;
	p.y = theta;
	p.z = phi;
	return p;
	//return Vec<T>(r, theta, phi);
}

template<typename T>
Vector<T>::~Vector()
{
}