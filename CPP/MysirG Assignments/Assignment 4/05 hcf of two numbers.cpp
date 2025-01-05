#include<iostream>
using namespace std;
int main()
{
   int n1,n2,hcf;
   cout<<"Enter n1 and n2: ";
   cin>>n1>>n2;
   hcf=n1;
   while(n1%hcf!=0 || n2%hcf!=0)
   {
       hcf--;
   }
   cout<<hcf;
    return 0;
}
