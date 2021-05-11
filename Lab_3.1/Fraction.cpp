//Fraction.cpp
#include "Fraction.h"

using namespace std;

Fraction::Fraction(const int F, const int S)
{
	int a = F;
	int b = S;
	while (b > 99)
	{
		b -= 100;
		a++;
	}
	while (b < -99)
	{
		b += 100;
		a--;
	}
	SetFirst(F);
	SetSecond(S);
}



Fraction::Fraction(double p)
{
	int a = (int)p;
	p -= a;
	p *= 100;
	int b = (int)p;

	while (b > 99)
	{
		b -= 100;
		a++;
	}
		while (b < -99)
		{
			b += 100;
			a--;
		}
	SetFirst(a);
	SetSecond(b);
}

Fraction::Fraction(const Fraction& v)
{
	int a = v.GetFirst();
	int b = v.GetSecond();

	while (b > 99)
	{
		b -= 100;
		a++;
	}
	while (b < -99)
	{
		b += 100;
		a--;
	}
	SetFirst(a);
	SetSecond(b);
}

Fraction::~Fraction(void)
{}

Fraction::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "[a] = " << GetFirst() << endl;
	ss << "(b) = " << GetSecond() << endl;
	//ss << "[" << GetFirst() << "]" << ", (" << GetSecond() << ")" << endl;
	ss << "(" << GetFirst() << ", " << GetSecond() << ")" << endl;
	return ss.str();
}

ostream& operator <<(ostream& out, const Fraction& s)
{
	return out << (string)s;
}

istream& operator >>(istream& in, Fraction& s)
{
	int first, second;
	cout << "[a] = "; in >> first;
	cout << endl << "(b) = "; in >> second;
	s.SetFirst(first);
	s.SetSecond(second);
	return in;
}

Fraction operator + (const Fraction& p1, const Fraction& p2)
{
	Fraction tmp;
	int P_F = p1.GetFirst() + p2.GetFirst();
	int P_S = p1.GetSecond() + p2.GetSecond();

	if (P_S > 99)
	{
		P_S = P_S - 100;
		P_F = P_F + 1;
	}

	tmp.SetFirst(P_F);
	tmp.SetSecond(P_S);

	return tmp;
}

Fraction operator - (const Fraction& p1, const Fraction& p2)
{
	Fraction tmp;
	int P_F = p1.GetFirst() - p2.GetFirst();
	int P_S = p1.GetSecond() - p2.GetSecond();

	while (P_S > 99)
	{
		P_S -= 100;
		P_F++;
	}
	while (P_S < -99)
	{
		P_S += 100;
		P_F--;
	}
	tmp.SetFirst(P_F);
	tmp.SetSecond(P_S);

	return tmp;
}


double operator / (const Fraction& p1, const Fraction& p2)
{
	double P1 = p1.GetFirst() + 0.01 * p1.GetSecond();
	double P2 = p2.GetFirst() + 0.01 * p2.GetSecond();

	return P1 / P2;
}