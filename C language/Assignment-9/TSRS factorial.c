#include<stdio.h>

int fact(int);

main()
{
    int n,res;
    printf("Enter the number:");
    scanf("%d",&n);
    res=fact(n);
    printf("The factorial of %d is %d",n,res);
    return 0;
}

int fact(int a)
{
    int i,res=1;
    for(i=1;i<=a;i++)
        res*=i;
    return res;
}
