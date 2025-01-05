#include<iostream>
using namespace std;
int next_prime(int);
int isprime(int);
int main()
{
   int n;
   cout<<"Enter number:";
   cin>>n;
   cout<<next_prime(n);
    return 0;
}
int next_prime(int n)
{
    int i;
    for(i=n+1;1;i++)
    {
     if(isprime(i))
        break;
    }
    return i;
}


 int isprime(int n)
 {
     int flag=1;
     if(n==1)
    {
        cout<<"Non-prime";
        return 0;
    }

   for(int i=2;i<n;i++)
    if(n%i==0)
    flag=0;
   if(flag==1)
    return 1;
    return 0;
 }
