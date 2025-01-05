#include<stdio.h>

int isprime(int);

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(isprime(n))
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    return 0;
}

int isprime(int a)
{
   int i;

    for(i=2;i<=a;i++)
    {
       if(a%i==0)
        return 0;
    }
    return 1;
}
