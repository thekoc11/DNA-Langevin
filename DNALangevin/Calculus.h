#pragma once
#ifndef CALCULUS_H
#define CALCULUS_H
#endif // !CALCULUS_H

#include "pch.h"

double Derivative(double (*f) (double), double l);
Vec<double> Gradient(double (*f)(Vec<double>), Vec<double>);


inline double Derivative(double(*f)(double), double l)
{
	
	double h = 0.00001;

	double r = (f(l + h) + f(l - h)) / 2 * h;
	return r;
	
	//return 0.0;
}

inline Vec<double> Gradient(double(*f)(Vec<double>), Vec<double> r)
{
	Vec<double> force;

	return Vec<double>();
}



