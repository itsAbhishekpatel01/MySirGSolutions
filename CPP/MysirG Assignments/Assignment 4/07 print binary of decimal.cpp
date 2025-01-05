#include<iostream>
using namespace std;
int main()
{
   int d,b=0;
   cout<<"Enter d: ";
   cin>>d;
   while(d)
   {
      d/=2;
       b=(b*10)+(d%2);
   }
   cout<<b;
    return 0;
}
