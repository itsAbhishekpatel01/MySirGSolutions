#include<iostream>
using namespace std;
int sum(int);
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<sum(n);
    return 0;
}

int sum(int n)
{
  if(n==0)
    return 0;
   return sum(n-1)+n;
}
