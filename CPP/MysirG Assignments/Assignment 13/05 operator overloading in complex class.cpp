 #include<iostream>
using namespace std;
class complex
{
    int real,imag;
public:
    void setvalues(int r,int i){real=r;imag=i;}
    void showvalues(void){cout<<real<<"+"<<imag<<"i\n";}
    complex operator+(complex &x)
    {
        complex temp;
        temp.real=real+x.real;
        temp.imag=imag+x.imag;
        return temp;
    }
     complex operator-(complex &x)
    {
        complex temp;
        temp.real=real-x.real;
        temp.imag=imag-x.imag;
        return temp;
    }
     complex operator*(complex &x)
    {
        complex temp;
        temp.real=real*x.real;
        temp.imag=imag*x.imag;
        return temp;
    }
     complex operator/(complex &x)
    {
        complex temp;
        temp.real=real/x.real;
        temp.imag=imag/x.imag;
        return temp;
    }
     complex operator-()
    {
        complex temp;
        temp.real=-real;
        temp.imag=-imag;
        return temp;
    }
     int operator==(complex &x)
    {
        if(real==x.real)
            if(imag==x.imag)
            return 1;
        return 0;
    }
     complex operator++()
    {
        complex temp;
        temp.real=++real;
        temp.imag=++imag;
        return temp;
    }
    complex operator++(int)
    {
        complex temp;
        temp.real=real++;
        temp.imag=imag++;
        return temp;
    }
};
int main()
{
   complex c1,c2,c3,c4;
   c1.setvalues(3,4);
   c1.showvalues();
   c2.setvalues(4,3);
   c2.showvalues();
   c3.setvalues(4,3);
   c3.showvalues();
   (c1+c2).showvalues();
   (c1-c2).showvalues();
   (c1*c2).showvalues();
   (c1/c2).showvalues();
   (-c1).showvalues();
   if(c1==c2)
    cout<<"Yes\n";
   else
    cout<<"No\n";
   if(c2==c3)
    cout<<"Yes\n";
   else
    cout<<"No\n";
   c3=++c1;
   c1.showvalues();
   c3.showvalues();
   c4=c2++;
   c2.showvalues();
   c4.showvalues();
   return 0;
}
