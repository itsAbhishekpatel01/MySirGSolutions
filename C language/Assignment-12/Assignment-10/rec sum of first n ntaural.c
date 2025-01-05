#include<stdio.h>

int sum(int);

main()
{
    int n,res;
    printf("Enter the value of n:");
    scanf("%d",&n);
    res=sum(n);
    printf("%d",res);
    return 0;
}

int sum(int a)
{
    int res;
    if (a==1)
        return 1;
    sum(a-1);
    res=a+sum(a-1);
    return res;
}
