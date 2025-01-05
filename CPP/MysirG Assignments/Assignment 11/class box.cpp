#include<iostream>
using namespace std;

class box
{
private:
    int length,breadth,height;
public:
    void setdimensions(int l,int b,int h){length=l;breadth=b;height=h;}
    void showdimensions(void){cout<<"\nThe dimensions are:"<<length<<"X"<<breadth<<"X"<<height;}
    box(){length=breadth=height=0;}
    box(int l,int b,int h){length=l;breadth=b;height=h;}
    box(int s){length=breadth=height=s;}
};

int main()
{
    box b1,b2,b3(4,6,8),b4(2);
    b1.setdimensions(2,4,6);
    b1.showdimensions();
    b2.showdimensions();
    b3.showdimensions();
    b4.showdimensions();
    return 0;
}
