#include<iostream>
using namespace std;
int main()
{
   int a,b;
    cout<<"Enter a and b:";
    cin>>a>>b;
    if(a>b)
        cout<<a<<" is greater";
    else if(a<b)
        cout<<b<<" is greater";
    else
        cout<<a<<" and "<<b<<" are equal";
    return 0;
}
