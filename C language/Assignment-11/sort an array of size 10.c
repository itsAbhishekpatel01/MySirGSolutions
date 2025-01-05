#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,temp,a[10];
    printf("Enter the 10 numbers:");
    for(i=0; i<=9; i++)
        scanf("%d",&a[i]);

    printf("Unsorted Array is:\n");
    for(i=0; i<=9; i++)
        printf("%d\t",a[i]);
    for(i=0; i<=9; i++)
    {
        for(j=(i+1); j<=9; j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    }
    printf("\nSorted Array is:\n");
    for(i=0; i<=9; i++)
        printf("%d\t",a[i]);
        return 0;
}
