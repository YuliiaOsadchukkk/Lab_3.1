//Money.h
#pragma once
#pragma pack(1)
#include "Pair.h"

class Fraction : public Pair
{
public:

	Fraction(const int first = 0, const int second = 0);
	Fraction(const Fraction& s);
	Fraction(double p);
	~Fraction(void);

	operator string () const;

	friend ostream& operator << (ostream& out, const Fraction& s);
	friend istream& operator >> (istream& in, Fraction& s);

	friend Fraction operator + (const Fraction&, const Fraction&);
	friend Fraction operator - (const Fraction&, const Fraction&);
	friend double operator / (const Fraction&, const Fraction&);
};
