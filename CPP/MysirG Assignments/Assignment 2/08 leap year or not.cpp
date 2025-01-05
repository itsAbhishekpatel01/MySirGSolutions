#include<iostream>
using namespace std;
int main()
{
   int a;
    cout<<"Enter a:";
    cin>>a;
   if(a%100==0)
   {
       if(a%400==0)
        cout<<"Leap year";
       else
        cout<<"Non-leap year";
   }
   else
   {
        if(a%4==0)
        cout<<"Leap year";
       else
        cout<<"Non-leap year";
   }

    return 0;
}
