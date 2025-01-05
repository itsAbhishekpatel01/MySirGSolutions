#include<iostream>
using namespace std;int fact(int);
int perm(int,int);
int main()
{
   int n,r;
    cout<<"Enter n and r:";
    cin>>n>>r;
   cout<<perm(n,r);
    return 0;
}

int perm(int n,int r)
{
   return (fact(n)/fact(n-r));
}

int fact(int n)
{
    int res=1;
  for(int i=1;i<=n;i++)
   res*=i;
   return res;
}
