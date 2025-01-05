#include<iostream>
using namespace std;
int main()
{
   int n,flag=1;
   cout<<"Enter n:";
   cin>>n;
   if(n==1)
    {
        cout<<"Non-prime";
        return 0;
    }

   for(int i=2;i<n;i++)
    if(n%i==0)
    flag=0;
   if(flag==1)
    cout<<"Prime";
   else
    cout<<"Non-prime";
    return 0;
}
