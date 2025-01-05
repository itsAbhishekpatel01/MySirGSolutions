#include<stdio.h>

int next_prime(int);

 int main()
{
    int n,res;
        printf("Enter the number:");
        scanf("%d",&n);
        res=next_prime(n);
        printf("The next prime number after %d is %d",n,res);
        return 0;
}
int next_prime(int a)
{
    int i,j;
     for(i=a;i>=1;i++)
    {
       for(j=2;j<=i;j++)
       {
           if(i%j==0)
            break;
       }
       if(i==j && i>a)
        return i;
    }
}
