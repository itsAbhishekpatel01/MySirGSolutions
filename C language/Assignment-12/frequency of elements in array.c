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
