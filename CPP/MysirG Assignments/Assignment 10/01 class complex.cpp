#include<iostream>
using namespace std;
class Complex{
int real,imag;
public:
    void setdata(int r,int i){real=r;imag=i;}
    void showdata(void){cout<<real<<"+"<<imag<<"i\n";}
    Complex sum(Complex &X)
    {
        Complex temp;
        temp.real=real+X.real;
        temp.imag=imag+X.imag;
        return temp;
    }
    Complex sub(Complex &X)
    {
        Complex temp;
        temp.real=real-X.real;
        temp.imag=imag-X.imag;
        return temp;
    }
    Complex mul(Complex &X)
    {
        Complex temp;
        temp.real=real*X.real;
        temp.imag=imag*X.imag;
        return temp;
    }

};
int main()
{
    Complex c1,c2,c3;
    c1.setdata(3,4);
    c1.showdata();
    c2.setdata(4,3);
    c2.showdata();
    c3=c1.sum(c2);
    c3.showdata();
    c3=c1.sub(c2);
    c3.showdata();
    c3=c1.mul(c2);
    c3.showdata();
    return 0;
}
