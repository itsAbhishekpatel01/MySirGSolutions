#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,i=1,hcf;
    printf("Enter the first number:");
    scanf("%d",&n1);
    printf("Enter the second number:");
    scanf("%d",&n2);

   while(i<=(n1>n2?n1:n2))
    {
       if(n1%i==0 && n2%i==0 )
        hcf=1;
        i++;
    }
    if(hcf==1)

        printf("%d and %d are co-prime numbers",n1,n2);
    else
        printf("%d and %d are not co-prime numbers",n1,n2);
    return 0;
}
