#include<stdio.h>

int first_nat(int);

main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    n=n-first_nat(2*n);

    return 0;
}

int first_nat(int a)
{
    if (a==0)
    return 1;
    if(a%2!=0)
    printf("%d\n",a);
    first_nat(a-1);
}
