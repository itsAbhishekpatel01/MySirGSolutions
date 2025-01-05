#include<stdio.h>
int sum(int);
main()
{
    int n,res;
    printf("Enter the value of n:");
    scanf("%d",&n);
    res=sum(2*n-1);
    printf("%d",res);
    return 0;
}
int sum(int a)
{
    int res;
    if (a<=0)
        return 0;
    res=a+sum(a-2);
    return res;
}
