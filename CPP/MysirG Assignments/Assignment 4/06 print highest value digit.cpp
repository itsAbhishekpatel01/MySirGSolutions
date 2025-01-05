#include<iostream>
using namespace std;
int main()
{
   int n,max=1;
   cout<<"Enter n: ";
   cin>>n;
   while(n)
   {
     if(n%10>max)
        max=(n%10);
     n/=10;
   }
   cout<<max;
    return 0;
}
