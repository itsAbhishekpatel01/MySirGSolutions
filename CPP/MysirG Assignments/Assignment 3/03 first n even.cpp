#include<iostream>
using namespace std;
int main()
{
   int n;
    cout<<"Enter n:";
    cin>>n;
   for(int i=1;i<=2*n;i++)
   if(i%2==0)
    cout<<i<<"\n";
    return 0;
}
