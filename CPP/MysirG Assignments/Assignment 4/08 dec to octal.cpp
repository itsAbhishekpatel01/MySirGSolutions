#include<iostream>
using namespace std;
int main()
{
   int d,oct=0;
   cout<<"Enter d: ";
   cin>>d;
   while(d)
   {
      d/=8;
       oct=(oct*10)+(d%8);
   }
   cout<<oct;
    return 0;
}
