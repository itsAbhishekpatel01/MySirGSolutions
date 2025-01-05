#include<iostream>
using namespace std;
int oct(int);
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<oct(n);
    return 0;
}

int oct(int n)
{
  if(n==0)
    return 0;
   return oct(n/8)*10+n%8;
}
