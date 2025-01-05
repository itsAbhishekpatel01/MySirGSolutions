#include<iostream>
using namespace std;
class Account
{
private:
    int account_no;
    float balance;
    static float rateoI;
public:
    void setbalance(float b){balance=b;}
    void setaccountno(int a){account_no=a;}
    float getbalance(void){return balance;}
    int getaccountno(void){return account_no;}
    static void setRateOfI(float r){Account::rateoI=r;}
     float getRateofI(void){return Account::rateoI;}
};
int main()
{
 Account a;
 a.setbalance(986.54);
 a.setaccountno(111);
 cout<<"Balance:"<<a.getbalance();
 cout<<"\nAccount no:-"<<a.getaccountno();
 Account::setRateOfI(3.14);
 cout<<"\nRate of Interest:"<<a.getRateofI();
 return 0;
}
