#include<stdio.h>

void nat(int);

main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    nat(n);
    return 0;

}
void nat(int a)
{
    int i;
    for(i=1;i<=a;i++)
        printf("%d\n",i);

}
