#include<bits/stdc++.h>
using namespace std;

struct Complex
{
    double real;
    double imag;

    Complex conjugate()
    {
        Complex cTemp;
        cTemp.real=real;
        cTemp.imag=-imag;
        return cTemp;
    }

    double modulus()
    {
        return sqrt(real*real+imag*imag);
    }

    double argument()
    {
        return atan2(imag,real);
    }

    Complex add(Complex c)
    {
        Complex cTemp = {c.real+real,c.imag+imag};
        return cTemp;
    }

    Complex multiply(Complex c)
    {
        Complex cTemp = {c.real*real - c.imag*imag, c.real*imag + c.imag*real};
        return cTemp;
    }

    double abs_angle_between(Complex c)
    {
        double TempAngle = c.argument() - atan2(imag,real);

        if(abs(TempAngle)<M_PI) return abs(TempAngle);
        return 2*M_PI - abs(TempAngle);
    }

    void print()
    {
        if(imag==0)
        {
            cout<<real<<" + "<<"0.00i";
            return;
        }
        
        else if(imag>0)
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
            return;
        }

        cout<<real<<" - "<<abs(imag)<<"i"<<endl;
        return;

    }

};
