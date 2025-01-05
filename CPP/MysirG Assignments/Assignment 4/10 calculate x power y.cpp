#include<iostream>
using namespace std;
int main()
{
   int x,y,res=1;
   cout<<"Enter x and y: ";
   cin>>x>>y;
   while(y)
   {
     res*=x;
     y--;
   }
   cout<<res;
    return 0;
}
