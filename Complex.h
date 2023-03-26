#ifndef _VECTOR_H
#define _VECTOR_H
#include <iostream>
#include <math.h>
using namespace std;
class Complex
{
protected:
	double re, im;
public:
	Complex();
	Complex(double r);
	Complex(double r, double i);
	Complex(const Complex& com);
	~Complex();
	Complex operator +(const Complex& com);
	Complex operator - (const Complex& com);
	Complex operator * (const Complex& com);
	Complex operator / (const Complex& com);
	friend ostream& operator<< (ostream&, const Complex&);
	friend istream& operator>> (istream&, Complex&);
	void print();
};
#endif