#include<stdio.h>

void first_nat(int);

main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    first_nat(n);
    return 0;
}

void first_nat(int a)
{
    if (a>0)
    {
         first_nat(a-1);
       printf("%d\n",a);
    }
}
