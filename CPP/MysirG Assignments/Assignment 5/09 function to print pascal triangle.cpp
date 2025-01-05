#include<iostream>
using namespace std;
void pascal (int);
int main()
{
   int n;
    cout<<"Enter n:";
    cin>>n;
   pascal(n);
    return 0;
}

void pascal(int num)
{
    int row,col,space,n;
    for(row=0;row<num;row++)
    {
        for(space=0;space<(num-row);space++)
        {
            cout<<" ";
        }
        n=1;
        for(col=0;col<=row;col++)
        {
            cout<<"  "<<n;
            n=n*(row-col)/(col+1);
        }
        cout<<"\n";
    }
}
