#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,i=1,lcm;
    printf("Enter the first number:");
    scanf("%d",&n1);
    printf("Enter the second number:");
    scanf("%d",&n2);

   while(i<=n1*n2)
    {
       if(i%n1==0 && i%n2==0 )
       {
          lcm=i;
          break;
       }
        i++;
    }
    printf("The LCM of %d and %d is %d",n1,n2,lcm);
    return 0;
}
