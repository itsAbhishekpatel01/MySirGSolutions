#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<fact(n);
    return 0;
}

int fact(int n)
{
  if(n==0)
    return 1;
   return fact(n-1)*n;
}
