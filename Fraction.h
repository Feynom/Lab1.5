#pragma once
#include "Pair.h"

class Fraction
{
	Pair p;
public:
	void SetP(double first, double second);
	Pair GetP() const;

	void Display();
	void Read();
	string toString() const;

	void ComparePairs(Pair p1, Pair p2);
};
