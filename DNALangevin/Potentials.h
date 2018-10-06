#pragma once
class Potentials
{
	double sigma;
	double epsilon;
	double kStretch;
	double kBend;
	double l0;
	double cos0;
public:
	Potentials();
	double Ulj(Vec<double>);
	double Ustretch(Vec<double>);
	double Ubend(Vec<double>);
	~Potentials();
};

