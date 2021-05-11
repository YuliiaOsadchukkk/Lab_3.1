//Source.cpp
#include <iostream>
#include "Fraction.h"
#include "Pair.h"

using namespace std;

int main()
{

	//////////////////////////пара//////////////////////////

	Pair p1, p2;
	cout << "Input first pair" << endl;
	cin >> p1;
	cout << "Input second pair" << endl;
	cin >> p2;

	cout << endl;
	cout << "First pair a and b";
	cout << p1 << endl;

	cout << "Second pair a is c, b is d";
	cout << p2 << endl;

	//додавання пар
	cout << "Sum of pairs:" << p1 + p2 << endl << endl;

	//множення на число
	int number;
	cout << "(number, you want to multiply on) n = ";
	cin >> number; cout << endl;

	cout << "First pair multyplied on n : " << p1 * number << endl;
	cout << "Second pair multiplyed on n: " << p2 * number << endl;
	cout << "--------------------------------------------" << endl << endl;


	//////////////////////////гроші//////////////////////////
	Fraction n1, n2;

	cout << endl;
	cout << "Input number 1: ";
	cin >> n1;

	cout << endl;
	cout << "Input number 2: ";
	cin >> n2;

	cout << endl;
	cout << "Number 1: ";
	cout << n1 << endl;

	cout << "Number 2: ";
	cout << n2 << endl;

	//додавання пар
	cout << "Sum of numbers: " << n1 + n2 << endl;

	//віднімання пар
	cout << "Difference of numbers: " << n1 - n2 << endl;

	//ділення пар
	cout << "Division of numbers: " << n1 / n2 << endl;
	cout << "--------------------------------------------" << endl << endl;

	/////////////////////////////////////////////////////////

	cout << endl;
	cout << "p1: " << p1 << endl;
	cout << "++p1: " << ++p1 << endl;
	cout << "--p1: " << --p1 << endl;
	cout << "p1++: " << p1++ << endl;
	cout << "p1--: " << p1-- << endl << endl;
	cout << "--------------------------------------------" << endl << endl;

	cout << "n1: " << n1 << endl;
	cout << "++n1: " << ++n1 << endl;
	cout << "--n1: " << --n1 << endl;
	cout << "n1++: " << n1++ << endl;
	cout << "n1--: " << n1-- << endl << endl;

}



