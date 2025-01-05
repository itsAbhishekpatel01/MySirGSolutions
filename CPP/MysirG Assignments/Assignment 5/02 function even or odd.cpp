#include<iostream>
using namespace std;
int even_odd(int);
int main()
{
   int n;
   cout<<"Enter number:";
   cin>>n;
   if(even_odd(n))
    cout<<"Even";
   else
    cout<<"Odd";
    return 0;
}
int even_odd(int n)
{
    if(n%2==0)
        return 1;
    return 0;
}
