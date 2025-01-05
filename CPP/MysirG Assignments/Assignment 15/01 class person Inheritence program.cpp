#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    char name[20];
    int age;
public:
    void setName(char n[]){strcpy(name,n);}
    char* getName(){return name;}
    void setAge(int a){age=a;}
    int getAge(){return age;}
};
class Employee:public Person
{
    static int empid;
    float salary;
public:
    void setEmployeeData(char n[],int a,float s)
    {
        empid++;
        setName(n);
        setAge(a);
        salary=s;
    }
    void showEmployeeData()
    {
        cout<<"\n\nId:"<<empid;
        cout<<"\nName:"<<getName();
        cout<<"\nAge:"<<getAge();
        cout<<"\nSalary:"<<salary;
    }
    static int  countEmployee(){return empid;}
};
int Employee::empid;
int main()
{
    Employee e1,e2,e3;
    e1.setEmployeeData("Abhi",20,98000.0);
    e1.showEmployeeData();
    e2.setEmployeeData("Rahul",18,18000.0);
    e2.showEmployeeData();
    cout<<"\nNumber of employee:"<<Employee::countEmployee();
    e3.setEmployeeData("Ravi",23,34565.0);
    e3.showEmployeeData();
    cout<<"\nNumber of employee:"<<Employee::countEmployee();
    return 0;
}
