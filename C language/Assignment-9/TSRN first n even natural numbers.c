#include<stdio.h>

void evennat(int);
int iseven(int);

main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    evennat(n);
    return 0;
}
void evennat(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        if(iseven(i))
        printf("%d\n",i);
    }

}
int iseven( int x)
{
    if(x%2==0)
        return 1;
    return 0;
}
