#include <iostream>
#include "complex.h"

using namespace std;

void print_complex(complex c)
{
    if(c.im >= 0)
        cout << c.re << " + " << c.im << "i" << endl;
        
    else
        cout << c.re << c.im << "i" << endl;

}

complex add_complex(complex a, complex b)
{
    complex c;
    c.re = a.re + b.re;
    c.im = a.im + b.im;
    return c;

}

complex subtract_complex(complex a, complex b)
{
    complex d;
    d.re = a.re - b.re;
    d.im = a.im - b.im;
    return d;

}

complex divide_complex(complex a, complex b)
{
    complex e;
    e.re = (a.re * b.re + a.im * b.im) / b.re * b.re + b.im * b.im;
    e.im = (a.im * b.re - a.re * b.im) / b.re * b.re + b.im * b.im;
    return e;

}

complex multiply_complex(complex a, complex b)
{
    complex f;
    f.re = a.re * b.re - a.im * b.im;
    f.im = a.re * b.im + a.im * b.re;
    return f;

}