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
    printf("Original Array:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
     reverse(a,n);
        return 0;
}

void reverse(int b[],int x)
{
   int i,temp;

       for(i=1;i<=x/2;i++)
   {
       temp=b[x-i];
         b[x-i]=b[i-1];
         b[i-1]=temp;
   }


    printf("\Reversed Array:\n");
    for(i=0;i<x;i++)
        printf("%d\t",b[i]);
        return 0;
}
