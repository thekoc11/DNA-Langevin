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
Vector<T>::~Vector()
{
}