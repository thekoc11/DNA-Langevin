#pragma once
#include"Bead.h"
#include"ViralCapsid.h"
class Potentials
{
	double sigma;
	double epsilon;
	double kStretch;
	double kBend;
	double l0;
	double theta0;
public:
	Potentials();
	double Ulj(Vector<double>);
	double Ustretch(Bead*, Bead*);
	double Ubend(Bead*, Bead*, Bead*);
	~Potentials();
};

