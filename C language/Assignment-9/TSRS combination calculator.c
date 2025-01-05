#include<stdio.h>

int perm(int,int);
int fact(int);

main()
{
    int n,r,res;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of r:");
    scanf("%d",&r);
    res=perm(n,r)/fact(r);
    printf("Number of combination that can be made of %d numbers selected %d at a time is %d",n,r,res);
    return 0;
}

int fact(int a)
{
    int i,res=1;
    for(i=1;i<=a;i++)
        res*=i;
    return res;
}

int perm(int a,int b)
{
    int res;
    res=fact(a)/fact(a-b);
    return res;
}
