#include<iostream>
using namespace std;

class time
{
private:
    int hour,min,sec;
public:
    void settime(int h,int m,int s){hour=h;min=m;sec=s;}
    void showtime(void){ normalize();cout<<hour<<":"<<min<<":"<<sec<<"\n";}
    time operator+(time &X)
    {
        time temp;
        temp.hour=hour+X.hour;
        temp.min=min+X.min;
        temp.sec=sec+X.sec;
        return temp;
    }
     time operator-(time &X)
    {
        time temp;
        temp.hour=hour-X.hour;
        temp.min=min-X.min;
        temp.sec=sec-X.sec;
        return temp;
    }
    time operator++()
    {
        time temp;
        temp.hour=hour;
        temp.min=min;
        temp.sec=++sec;
        return temp;
    }
    time operator++(int)
    {
        time temp;
        temp.hour=hour;
        temp.min=min;
        temp.sec=sec++;
        return temp;
    }
    void operator!(){
        if(hour==0 && min==0 && sec==0){hour=1;min=sec=0;}
        else{hour=min=sec=0;}
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
    time t1,t2,t3,t4,t5;
    t1.settime(8,61,61);
    t1.showtime();
    t2.settime(8,18,27);
    t2.showtime();
    t3=t1+t2;
    t3.showtime();
    t3=t1-t2;
    t3.showtime();
    t4=++t1;
    t4.showtime();
    t1.showtime();
    t5=t2++;
    t5.showtime();
    t2.showtime();
    !t5;
    t5.showtime();
    !t5;
    t5.showtime();
    return 0;
}
