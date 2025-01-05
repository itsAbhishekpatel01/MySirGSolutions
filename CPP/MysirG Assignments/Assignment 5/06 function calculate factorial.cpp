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
    int res=1;
  for(int i=1;i<=n;i++)
   res*=i;
   return res;
}
