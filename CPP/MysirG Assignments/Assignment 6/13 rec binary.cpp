#include<iostream>
using namespace std;
int bin(int);
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<bin(n);
    return 0;
}

int bin(int n)
{
  if(n==0)
    return 0;
   return bin(n/2)*10+n%2;
}
