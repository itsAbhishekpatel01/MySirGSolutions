#include<iostream>
using namespace std;
int isprime(int);
void pprime(int,int);
int main()
{
  int n1,n2;
  cout<<"Enter n1 and n2:";
  cin>>n1>>n2;
  pprime(n1,n2);
  return 0;

}

void pprime(int n1,int n2)
{
     for(int i=n1;i<n2;i++)
    if(isprime(i))
    cout<<i<<"\n";
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
