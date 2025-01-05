#include<iostream>
using namespace std;
class Result{
int resulted,total_attempt,net_right,net_wrong,marks_for_right,marks_for_wrong;
public:
    void setresult(int,int,int,int,int=4,int=1);
    void showresult(void);
};
void Result::setresult(int res,int tot,int netr,int netw,int marksR,int marksW)
{
    resulted=res;
    total_attempt=tot;
    net_right=netr;
    net_wrong=netw;
    marks_for_right=marksR;
    marks_for_wrong=marksW;
}
void Result::showresult(void)
{
    cout<<"Resulted:"<<resulted<<"\nTotal attempted:"<<total_attempt<<"\nNet right:"<<net_right<<"\nNet Wrong:"<<net_wrong;
}
int main()
{
    Result r1;
    r1.setresult(310,90,80,10);
    r1.showresult();
    return 0;
}
