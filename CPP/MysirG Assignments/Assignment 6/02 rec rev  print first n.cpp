#include<iostream>
using namespace std;
void printn(int);
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    printn(n);
    return 0;
}

void printn(int n)
{
  if(n==0)
    return ;
      cout<<n<<"\n";
  printn(n-1);
}
