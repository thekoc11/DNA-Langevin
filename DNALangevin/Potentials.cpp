#include "pch.h"
#include "Potentials.h"
#include<math.h>


Potentials::Potentials()
{
	sigma = new Bead->getDiameter();
	epsilon = 0.01;
	kStretch = 1;
	l0 = new Bead->getEffectiveBondLength();
	theta0 = 0;

}

double Potentials::Ulj(Vector<double> r)
{
	double ULJ = 0.0;
	double _r = r;
	ULJ = (_r>=sigma)?epsilon * (pow(sigma/_r, 12) - 2*pow(sigma/_r, 6)):0.0;
	return ULJ;
}

double Potentials::Ustretch(Bead *b1, Bead *b2)
{
	double l = abs(b1->getPosition() - b2->getPosition());
	double U = kStretch * pow((l - l0), 2);
	return U;
}

double Potentials::Ubend(Bead *b1, Bead *b2, Bead *b3)
{
	if (abs(b1->getIndex() - b2->getIndex()) == 1 && abs(b1->getIndex() - b3->getIndex()) == 2) {
		double theta = ((b1->getPosition() + -b2->getPosition()) * (b2->getPosition() + -b3->getPosition())) / (double(b1->getPosition() + -b2->getPosition())*double(b2->getPosition() + -b3->getPosition()));
		double U = kBend * pow((cos(theta) - cos(theta0)), 2);


	}
	return 0.0;
}


Potentials::~Potentials()
{
}
