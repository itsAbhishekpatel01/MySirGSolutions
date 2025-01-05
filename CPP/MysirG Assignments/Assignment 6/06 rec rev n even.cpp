#include<iostream>
using namespace std;
void printn(int);
void nnat(int);
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    nnat(n);
    return 0;
}

void nnat(int n)
{
    printn(2*n);
}
void printn(int n)
{
  if(n==0)
    return ;
      if(n%2==0)
    cout<<n<<" ";
  printn(n-1);


}
