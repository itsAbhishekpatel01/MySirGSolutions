#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3],b[3][3],mul[3][3],i,j;
    printf("Enter the 9 elements of 1st matrix:");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
    }
     printf("Enter the 9 elements of 2nd matrix:");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            scanf("%d",&b[i][j]);
    }
    printf("The sum matrix of 1st and 2nd matrix:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            mul[i][j]=a[i][j]*b[i][j];
    }

     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d\t",mul[i][j]);
            printf("\n");
    }
}
