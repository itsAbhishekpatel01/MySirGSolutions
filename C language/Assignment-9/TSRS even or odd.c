#include<stdio.h>

int even_odd(int);

main()
{
    int n,res;
    printf("Enter the value of n:");
    scanf("%d",&n);
   if(even_odd(n))
    printf("Even");
    else
    printf("Odd");
    return 0;
}
int even_odd(int a)
{
    if(a%2==0)
        return 1;
    return 0;
}
