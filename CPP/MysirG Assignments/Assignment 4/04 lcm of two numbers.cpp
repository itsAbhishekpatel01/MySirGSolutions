#include<iostream>
using namespace std;
int main()
{
   int n1,n2,lcm=1;
   cout<<"Enter n1 and n2: ";
   cin>>n1>>n2;
   while(lcm%n2!=0 || lcm%n1!=0)
   {
       lcm++;
   }
   cout<<lcm;
    return 0;
}
