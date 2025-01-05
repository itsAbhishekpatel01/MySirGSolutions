#include<iostream>
using namespace std;
int main()
{
   int n;
    cout<<"Enter the value of n:";
    cin>>n;
    while(n!=0)
    {
        if(n%10>7)
            break;
        n/=10;
    }
    if(n==0)
        cout<<"Valid";
    else
        cout<<"Invalid";
    return 0;
}
