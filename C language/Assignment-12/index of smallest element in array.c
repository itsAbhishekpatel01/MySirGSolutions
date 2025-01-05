#include<stdio.h>
#include<conio.h>
int main()
{
    int a[30],i,n,smli;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    smli=smlindex(a,n);
    printf("\nThe smallest element is at index at a[%d].",smli);
    return 0;
}
int smlindex(int b[],int x)
{
    int i=0,sml=b[i];
    for(i=0;i<x;i++)
      {
        if(b[i]>b[i+1])
        sml=b[i+1];
      }
      for(i=0;i<x;i++)
        if(b[i]==sml)
        break;
    return (i);
}
