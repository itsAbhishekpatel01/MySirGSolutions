#include<iostream.h>
using namespace std;
float circle_area(int);
int main()
{
   int r;
   cout<<"Enter radius:";
   cin>>r;
   cout<<circle_area(r);
    return 0;
}
float circle_area(int r)
{
    return (3.14*r*r);
}
