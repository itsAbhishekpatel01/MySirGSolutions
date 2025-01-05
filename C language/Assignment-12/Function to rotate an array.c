#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[30];
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the %d elements",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Unrotated Array:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
     rot1right(a,n);
        return 0;
}

void rot1right(int b[],int x)
{
   int temp,i;
    temp=b[x-1];
    for(i=(x-1);i>=1;i--)
        b[i]=b[i-1];
    b[0]=temp;
     printf("Rotated Array:\n");
    for(i=0;i<x;i++)
        printf("%d\t",b[i]);
}
