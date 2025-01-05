#include<iostream>
using namespace std;
int flcm(int,int);
int main()
{
   int n1,n2;
    cout<<"Enter the two numbers:";
    cin>>n1>>n2;
   cout<<flcm(n1,n2);
    return 0;
}

int flcm(int n1,int n2)
{
    int res=1;
  while(res%n1!=0 || res%n2!=0)
    res++;
   return res;
}
