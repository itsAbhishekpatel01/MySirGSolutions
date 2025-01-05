#include<stdio.h>

int sum(int);

main()
{
    int n,res;
    printf("Enter the value of n:");
    scanf("%d",&n);
    res=sum(n);
    printf("The sum of first %d natural numbers is %d",n,res);
    return 0;
}

int sum(int a)
{
    int i,res=0;
    for(i=1;i<=a;i++)
        res=res+i;
    return res;

}
