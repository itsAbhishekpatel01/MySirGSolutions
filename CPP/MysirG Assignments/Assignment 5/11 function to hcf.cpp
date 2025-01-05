#include<iostream>
using namespace std;
int fhcf(int,int);
int main()
{
   int n1,n2;
    cout<<"Enter the two numbers:";
    cin>>n1>>n2;
   cout<<fhcf(n1,n2);
    return 0;
}

int fhcf(int n1,int n2)
{
    int res=n1;
  while(n1%res!=0 || n2%res!=0)
    res--;
   return res;
}
