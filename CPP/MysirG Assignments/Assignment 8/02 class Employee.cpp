#include<iostream>
#include<strings.h>
using namespace std;
class Employee
{
private:
    int empid;
    char name[20];
    float salary;
public:
    void setEmployeeId(int id){empid=id;}
    void setEmployeeName(char n[]){strcpy(name,n);}
    void setEmployeeSalary(float s){salary=s;}
    void showEmployee(){cout<<"Id:"<<empid<<"\nName:"<<name<<"\nSalary:"<<salary;}
    float getSalary(){return salary;}
    int getEmpid(){return empid;}
    char* getName(){return name;}
};
int main()
{
    Employee E;
    E.setEmployeeId(1);
      cout<<"Id:"<<E.getEmpid()<<"\n";
    E.setEmployeeSalary(99999.9);
      cout<<"Salary:"<<E.getSalary()<<"\n";
    E.setEmployeeName("Abhishek");
    E.showEmployee();
    cout<<"\n"<<E.getName();
  return 0;
}
