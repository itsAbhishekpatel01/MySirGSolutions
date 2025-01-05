#include<stdio.h>

int first_nat(int);

main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    n=n-first_nat(n);

    return 0;
}

int first_nat(int a)
{
    if (a==0)
    return 1;
    printf("%d\n",a);
    first_nat(a-1);
}
