#include "pch.h"
#include "Bead.h"


int Bead::getIndex()
{
	return index;
}

double Bead::getDiameter()
{
	return d;
}

double Bead::getEffectiveBondLength()
{
	return l0;
}

double Bead::getPosition()
{
	return position;
}

Bead::Bead()
{
	index = -12767;
}


Bead::~Bead()
{
}
