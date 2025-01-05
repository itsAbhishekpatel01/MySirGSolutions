//Assignment-2 by Abhishek Patel
//function power() to calculate power 
#include<iostream>
#include<conio.h>
using namespace std;
double power(double,int=2);
int main()
{
    double m;
    int n,result;
    cout<<"Enter  base:";
    cin>>m;
    cout<<"Enter exponent:";
    cin>>n;
    result=power(m,n);
    cout<<"The result is:"<<result;
    result=power(m);
    cout<<"\nThe result without passing the exponent:"<<result;
    return 0;
}
double power(double a,int b)
{
    int i,res=1;
    for(i=1;i<=b;i++)
    {
        res*=a;
    }
    return res;
}
