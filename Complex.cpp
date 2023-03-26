#include "Complex.h"
Complex::Complex()
{
    re = 0;
    im = 0;
}
Complex::Complex(double r)
{
    re = r;
    im = 0;
}
Complex::Complex(double r, double i)
{
    re = r;
    im = i;
}
Complex::Complex(const Complex& com)
{
    re = com.re;
    im = com.im;
}
Complex::~Complex()
{
}
Complex Complex::operator+(const Complex& com)
{
    return Complex(re + com.re, im + com.im);
}
Complex Complex::operator-(const Complex& com)
{
    return Complex(re - com.re, im - com.im);
}
Complex Complex::operator*(const Complex& com)
{
    return Complex(re * com.re - im * com.im, re * com.im + im * com.re);
}
Complex Complex::operator/(const Complex& com)
{
    Complex temp;
    double kv = com.re * com.re + com.im * com.im;
    temp.re = (re * com.re + im * com.im) / kv;
    temp.im = (im * com.re - re * com.im) / kv;
    return temp;

}
void Complex::print()
{
    if (im != 0 && re != 0)
        cout << re << " + " << im << "i" << endl;
    else if (im == 0 && re != 0)
        cout << re << endl;
    else
        cout << im << endl;
}
ostream& operator<<(ostream& ou, const Complex& com)
{
    ou << com.re << " + "<< com.im << "i";
    return ou;
}

istream& operator>>(istream& in, Complex& com)
{
    in >> com.re >> com.im;
    return in;
}
