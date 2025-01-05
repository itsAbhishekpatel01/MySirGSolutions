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
    int res,rem;
    if (a<=0)
        return 0;
        rem=a%8;
    res=rem+10*sum(a/8);
    return res;
}
