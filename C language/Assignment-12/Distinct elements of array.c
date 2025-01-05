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
        dis(a,n);
        return 0;
}
void dis(int b[],int x)
{
    int i,j;
    printf("Distinct elements or array are:\n");
    for(i=0;i<x;i++)
    {
    for(j=(i+1);j<x;j++)
      {
        if(b[i]==b[j])
        break;
      }
    if(j==x)
        printf("%d\t",b[i]);
    }
}
