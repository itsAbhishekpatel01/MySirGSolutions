#include<iostream>
using namespace std;

class complex
{
private:
    int real,img;
public:
    friend istream& operator>>(istream&,complex&);
    friend ostream& operator<<(ostream&,complex);
};
istream& operator>>(istream &din,complex &C)
{
    din>>C.real>>C.img;
    return din;
}
ostream& operator<<(ostream &dout,complex C)
{
    dout<<C.real<<"+"<<C.img<<"i";
}
int main()
{
    complex c1;
    cout<<"Enter a complex number:";
    cin>>c1;
    cout<<c1;
    return 0;
}
