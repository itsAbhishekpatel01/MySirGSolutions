#include<iostream>
using namespace std;int fact(int);
int comb(int,int);
int main()
{
   int n,r;
    cout<<"Enter n and r:";
    cin>>n>>r;
   cout<<comb(n,r);
    return 0;
}


int comb(int n,int r)
{
   return (fact(n)/(fact(r)*fact(n-r)));
}

int fact(int n)
{
    int res=1;
  for(int i=1;i<=n;i++)
   res*=i;
   return res;
}
