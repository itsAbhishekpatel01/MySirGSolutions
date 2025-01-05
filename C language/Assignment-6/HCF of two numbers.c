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
       {
          hcf=i;
       }
        i++;
    }
    printf("The HCF of %d and %d is %d",n1,n2,hcf);
    return 0;
}
