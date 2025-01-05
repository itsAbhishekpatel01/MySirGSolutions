#include<iostream>
using namespace std;

class complex
{
private:
    int real,img;
public:
    void setdata(int r,int i){real=r;img=i;}
    void showdata(void){cout<<"\nThe complex number is:"<<real<<"+"<<img<<"i";}
    complex(int r,int i){real=r;img=i;}
    complex(){real=img=0;}
};

int main()
{
    complex c1,c2,c3(4,5);
    c1.setdata(3,4);
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}
