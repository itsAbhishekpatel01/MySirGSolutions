#include<iostream>
using namespace std;

class complex
{
private:
    int real,img;
public:
    void setdata(void)
    {
        int r,i;
        cout<<"Enter real and imaginary part of complex number:";
        cin>>r>>i;
        real=r;
        img=i;
    }
    void showdata(void)
    {
        cout<<"\nThe complex number is:"<<real<<"+"<<img<<"i";
    }
};

int main()
{
    complex C;
    C.setdata();
    C.showdata();
    return 0;
}
