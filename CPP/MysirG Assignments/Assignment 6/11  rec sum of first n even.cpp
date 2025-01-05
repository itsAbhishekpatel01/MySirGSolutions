#include<iostream>
using namespace std;
int sum(int);
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<sum(n);
    return 0;
}

int sum(int n)
{
    return n*(n+1);   //because sum of n odd numbers is n*n
}

