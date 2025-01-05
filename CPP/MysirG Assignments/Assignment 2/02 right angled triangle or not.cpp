#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three sides:";
    cin>>a>>b>>c;
    if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
