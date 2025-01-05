#include<iostream>
using namespace std;
int main()
{
   int a,b;
    cout<<"Enter the value of a and b:";
    cin>>a>>b;
    cout<<"a="<<a<<"\nb="<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nAfter jadu";
    cout<<"\na="<<a<<"\nb="<<b;
    return 0;
}
