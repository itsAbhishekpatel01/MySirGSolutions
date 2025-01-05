#include<iostream>
using namespace std;
int main()
{
   char c;
    cout<<"Enter c:";
    cin>>c;
   if(int(c)>=49 && int(c)<=57)
    cout<<"Digit";
   else if(int(c)>=65 && int(c)<=90)
    cout<<"Upper-case alphabet";
   else if(int(c)>=97 && int(c)<=122)
     cout<<"Lower-case alphabet";
   else
    cout<<"Special character";
    return 0;
}
