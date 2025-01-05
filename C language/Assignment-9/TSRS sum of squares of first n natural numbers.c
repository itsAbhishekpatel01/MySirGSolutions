#include<stdio.h>

int sqrsum(int);

main()
{
    int n,res;
    printf("Enter the value of n:");
    scanf("%d",&n);
    res=sqrsum(n);
    printf("The sum of square of first %d natural numbers is %d",n,res);
    return 0;
}
int sqrsum(int a)
{
    int i,res=0;
    for(i=1;i<=a;i++)
        res+=(i*i);
    return res;
}
