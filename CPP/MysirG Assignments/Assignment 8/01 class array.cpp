#include<iostream>
#include<conio.h>
using namespace std;
int menu(void);
struct arrayadt
{
    int arr[10];
    int  capacity;
    int lastindex;
};

class array
{
private:
    struct arrayadt a;
public:
    array()
    {
       a.capacity=10;
       a.lastindex=-1;
    }
    void inputArrayElements(int n)
    {
      if(a.lastindex+1==a.capacity)
        cout<<"Overflow";
      else
       {
           a.arr[a.lastindex+1]=n;
           a.lastindex++;
       }
    }

    int findmaxElement(void)
    {
        if(a.lastindex==-1)
        {
            cout<<"Array is empty";
            return 0;
        }
        int max=a.arr[0],i;
        for(i=1;i<=a.lastindex;i++)
        {
            if(max<a.arr[i])
                max=a.arr[i];
        }
        return max;
    }
 int findminElement(void)
    {
        if(a.lastindex==-1)
        {
            cout<<"Array is empty";
            return 0;
        }
        int min=a.arr[0],i;
        for(i=1;i<=a.lastindex;i++)
        {
            if(min>a.arr[i])
                min=a.arr[i];
        }
        return min;
    }
   void sort(void)
{
      int i,j,temp;
      for (j=1;j<=a.lastindex;j++)
      {
          temp=a.arr[j];
          i=j-1;
          while(i>=0 && temp<a.arr[i])
         {
              a.arr[i+1]=a.arr[i];
               i--;
         }
            a.arr[i+1]=temp;
      }
}
void editElement(int index,int newdata)
{
    a.arr[index]=newdata;
}
int sumofElements(void)
{
    int sum=0;
    for(int i=0;i<=a.lastindex;i++)
        sum+=a.arr[i];
    return sum;
}
float averageofElements(void)
{
    return sumofElements()/a.lastindex;
}
void printArray(void)
{
    if(a.lastindex==-1)
        cout<<"Array is empty";
    for(int i=0;i<=a.lastindex;i++)
        cout<<a.arr[i]<<"\t";
}
void deleteLast(void)
{
    if(a.lastindex==-1)
        cout<<"Array is already empty";
    a.lastindex--;
}

};


int main()
{
    array A;
    int data,index;
   while(1)
   {
       system("cls");
       A.printArray();
       switch(menu())
   {
   case 1:
       cout<<"Enter data:";
       cin>>data;
       A.inputArrayElements(data);
       break;
   case 2:
    cout<<"\nMax :"<<A.findmaxElement();
    break;

    case 3:
    cout<<"\nMin :"<<A.findminElement();
    break;
    case 4:
        A.sort();
        break;
    case 5:
        cout<<"Enter index and data";
        cin>>index>>data;
        A.editElement(index,data);
        break;
    case 6:
        cout<<"\nSum:"<<A.sumofElements();
        break;
        case 7:
        cout<<"\nAverage:"<<A.averageofElements();
        break;
        case 8:
            A.deleteLast();
            break;
        case 9:
            exit(0);
        default:
            cout<<"\nPlease enter valid choice";

   }
   getch();
   }
}

int menu(void)
{
    int choice;
    cout<<"\nPlease enter your choice:";
    cout<<"\n1.input array";
    cout<<"\n2.find max element";
    cout<<"\n3.Find min element";
    cout<<"\n4.sort";
    cout<<"\n5.Edit element at desired index";
    cout<<"\n6.Sum of elements";
    cout<<"\n7.Average of elements";
    cout<<"\n8.Delete last element";
    cout<<"\n9.Exit the program\n";
    cin>>choice;
    return choice;
}
