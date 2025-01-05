#include<iostream>
using namespace std;

class time
{
private:
    int hour,min,sec;
public:
    void settime(void)
    {
        int h,m,s;
        cout<<"Enter hour:min:sec=";
        cin>>h>>m>>s;
       hour=h;
       min=m;
       sec=s;
    }
    void showtime(void)
    {
        cout<<"\nThe time is:"<<hour<<":"<<min<<":"<<sec;
    }
};

int main()
{
    time C;
    C.settime();
    C.showtime();
    return 0;
}
