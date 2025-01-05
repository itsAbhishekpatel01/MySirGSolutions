#include<iostream>
using namespace std;
int main()
{
   int a,b,c,d;
    cout<<"Enter a,b,c:";
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if(d>0)
        cout<<"Roots are real and unequal";
    else if(d==0)
        cout<<"Roots are real and equal";
    else
        cout<<"Roots are imaginary and unequal";
    return 0;
}
