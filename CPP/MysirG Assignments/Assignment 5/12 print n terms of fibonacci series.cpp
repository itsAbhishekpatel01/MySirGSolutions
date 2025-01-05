#include<iostream>
using namespace std;
void fibonacci(int);
int main()
{
   int n;
    cout<<"Enter n:";
    cin>>n;
   fibonacci(n);
    return 0;
}

void fibonacci(int n)
{
  int a=-1,b=1,c;
  for(int i=0;i<n;i++)
  {
      c=a+b;
      a=b;
      b=c;
      cout<<c<<"  ";
  }
}
