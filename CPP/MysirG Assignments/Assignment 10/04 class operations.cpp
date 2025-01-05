#include<iostream>
using namespace std;
class operation{
public:
    static int pi;
    float area(int);
    float area(int,int);
    void add(int,int);
    void add(float,float);
    void add(string,string);
};
int operation::pi=3.14;
float operation::area(int r)
{
    return operation::pi*r*r;
}
float operation::area(int l,int b)
{
    return l*b;
}
void operation::add(int a,int b){cout<<"\n"<<a+b;}
void operation::add(float x,float y){cout<<"\n"<<x+y;}
void operation::add(string s1,string s2){cout<<"\n"<<s1+s2;}
int main()
{
    operation o1;
    cout<<o1.area(7)<<"sq.unit\n";
    cout<<o1.area(3,4)<<"sq.unit";
    o1.add(3,4);
//    o1.add(3.0,4.0);
    o1.add("Abhi","shek");
    return 0;
}
