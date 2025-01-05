#include<iostream>
using namespace std;
int main()
{
   int n,count=0;
    cout<<"Enter n:";
    cin>>n;
  while(n)
   {
    count++;
    n/=10;
   }
   cout<<count;
    return 0;
}
