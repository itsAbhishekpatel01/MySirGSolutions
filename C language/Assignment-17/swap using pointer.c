#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    printf("Before swapping\n A=%d \n B=%d \n",a,b);
    swap(&a,&b);
    printf("Before swapping\n A=%d \n B=%d \n",a,b);
    return 0;
}
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
