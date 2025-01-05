#include<stdio.h>

void prime_range(int,int);
main()
{
    int l,u;
    printf("Enter the lower limit:");
    scanf("%d",&l);
    printf("Enter the upper limit:");
    scanf("%d",&u);
    prime_range(l,u);
    return 0;
}
void prime_range(int a,int b)
{
    int i,j;
     printf("All prime numbers from %d to %d are printed below:\n",a,b);
    for(i=a;i<=b;i++)
    {
       for(j=2;j<=i;j++)
       {
           if(i%j==0)
            break;
       }
       if(i==j)
        printf("%d\n",i);
    }
}
