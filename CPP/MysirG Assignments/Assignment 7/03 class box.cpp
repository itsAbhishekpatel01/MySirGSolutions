#include<iostream>
using namespace std;

class box
{
private:
    int length,breadth,height;
public:
    void setdimensions(void)
    {
        int l,b,h;
        cout<<"Enter length,breadth and height=";
        cin>>l>>b>>h;
        length=l;
       breadth=b;
       height=h;
    }
    void showdimensions(void)
    {
        cout<<"\nThe dimensions are:"<<length<<"X"<<breadth<<"X"<<height;
    }
    int volume(void)
    {
        return length*breadth*height;
    }
};

int main()
{
    box C;
    C.setdimensions();
    C.showdimensions();
    cout<<"\nThe volume is:"<<C.volume();
    return 0;
}
