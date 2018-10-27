#pragma once

class Bead
{
	const double d = 2.5;//Bead Diameter (nm)
	const double l0 = 1.25;//effective bond length
	double alpha;

	int index;

	Vector<double> position;
public:

	int getIndex();
	double getDiameter();
	double getEffectiveBondLength();
	double getPosition();
	Bead();
	~Bead();
};

