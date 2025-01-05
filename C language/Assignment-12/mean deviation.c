#include<stdio.h>
#include<conio.h>

void mdev(float[],int);
float mod(float);
int main()
{
    int i,n;
    float a[30];
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the %d elements",n);
    for(i=0; i<n; i++)
        scanf("%f",&a[i]);
    mdev(a,n);
    return 0;
}
void mdev(float b[],int x)
{
    int i,sum=0;
    float avg;
    for(i=0; i<x; i++)
        sum=sum+b[i];
    avg=sum/6.0;
    for(i=0; i<x; i++)
        b[i]=mod(avg-b[i]);
    sum=0;
    for(i=0; i<x; i++)
        sum=sum+b[i];
    avg=sum/6.0;
    printf("The mean deviation is %.2f",avg);
    return 0;
}

float mod(float y )
{
    if(y<0)
        return (y*(-1));
    else
        return (y);
}
