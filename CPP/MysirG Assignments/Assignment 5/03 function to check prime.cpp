#include<iostream>
using namespace std;
int check_prime(int);
int main()
{
   int n;
   cout<<"Enter number:";
   cin>>n;
   if(check_prime(n))
    cout<<"Prime";
   else
    cout<<"Non-prime";
    return 0;
}
int check_prime(int n)
{
    int flag=1;
   if(n==1)
        return 0;

   for(int i=2;i<n;i++)
    if(n%i==0)
    flag=0;
   if(flag==1)
    return 1;
    return 0;
}
