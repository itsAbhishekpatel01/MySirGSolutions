#include<iostream>
#include<stdio.h>
using namespace std;
class list
{
private:
    struct node
    {
        int item;
        node *next;
    };
    node *head;
public:
    list(){head=NULL;}
    ~list()
    {
        while(head)
            deleteFirstItem();
    }
    void addItemAtStart(int);
    void addItemAtLast(int);
    void deleteFirstItem();
    void deleteLastItem();
    void veiwListItems();
};
void list::addItemAtStart(int data)
{
    node *n=new node;
    n->item=data;
    n->next=NULL;
    if(head==NULL)
            head=n;
    else
        {
          n->next=head;
          head=n;
        }
}
void list::addItemAtLast(int data)
{
   node *ptr=head;
   node *n=new node;
   n->item=data;
   n->next=NULL;
   if(ptr==NULL)
    head=n;
   else
   {
       while(ptr->next!=NULL)
        ptr=ptr->next;
       ptr->next=n;
   }
}
void list::deleteFirstItem()
{
    node *temp;
    if(head==NULL)
        printf("Nothing to delete");
    else
    {
        temp=head;
        head=temp->next;
        delete temp;
    }
}
void list::deleteLastItem()
{
    node *ptr;
    if(head==NULL)
        cout<<"Nothing to delete";
    else if(head->next==NULL)
    {
        delete head;
        head=NULL;
    }
    else
    {
        ptr=head;
        while(ptr->next->next)
            ptr=ptr->next;
        delete ptr->next;
        ptr->next=NULL;
    }
}
void list::veiwListItems()
{
   node *ptr;
   ptr=head;
   if(ptr==NULL)
    cout<<"List is empty";
   else
   {
       while(ptr!=NULL)
       {
           cout<<ptr->item<<"  ";
           ptr=ptr->next;
       }
   }
}
int menu()
{
    int choice;
    cout<<"\n1.Insert list item as first node";
    cout<<"\n2.Insert list item as last node";
    cout<<"\n3.Delete first list  item";
    cout<<"\n4.Delete last list item";
    cout<<"\n5.Exit";
    cout<<"\nPlease enter your choice:";
    cin>>choice;
    return choice;
}
int main()
{
    list l1;
    int data;
    while(1)
  {
     system("cls");
       l1.veiwListItems();
    switch(menu())
     {
       case 1:
            cout<<"Enter data:";
            cin>>data;
            l1.addItemAtStart(data);
            break;
        case 2:
            cout<<("Enter data:");
            cin>>data;
            l1.addItemAtLast(data);
            break;
        case 3:
            l1.deleteFirstItem();
            break;
        case 4:
            l1.deleteLastItem();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout<<"Please enter a valid choice";
    }
  }
 }



