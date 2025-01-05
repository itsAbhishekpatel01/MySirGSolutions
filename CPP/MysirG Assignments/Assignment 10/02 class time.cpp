#include<iostream>
using namespace std;

class time
{
private:
    int hour,min,sec;
public:
    void settime(int h,int m,int s){hour=h;min=m;sec=s;}
    void showtime(void){ normalize();cout<<hour<<":"<<min<<":"<<sec<<"\n";}
    time addtime(time &X)
    {
        time temp;
        temp.hour=hour+X.hour;
        temp.min=min+X.min;
        temp.sec=sec+X.sec;
        return temp;
    }
     time subtime(time &X)
    {
        time temp;
        temp.hour=hour-X.hour;
        temp.min=min-X.min;
        temp.sec=sec-X.sec;
        return temp;
    }
    void normalize()
    {
        if(sec>60)
        {
             min+=sec/60;
             sec%=60;
        }
         if(min>60)
        {
             hour+=min/60;
             min%=60;
        }
        if(sec<0)
        {
            sec+=60;
            min--;
        }
        if(min<0)
        {
            min+=60;
            hour--;
        }
    }
};

int main()
{
    time t1,t2,t3;
    t1.settime(8,61,61);
    t1.showtime();
    t2.settime(8,18,27);
    t2.showtime();
    t3=t1.addtime(t2);
    t3.showtime();
    t3=t1.subtime(t2);
    t3.showtime();
    return 0;
}
