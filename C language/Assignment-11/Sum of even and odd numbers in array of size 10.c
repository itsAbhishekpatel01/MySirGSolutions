#include<stdio.h>

main()
{
    int a[10],i,even_sum=0,odd_sum=0;
    printf("Enter the 10 numbers:");
    for(i=0; i<=9; i++)
    scanf("%d",&a[i]);
    for(i=0; i<=9; i++)
    {
      if(a[i]%2==0)
          even_sum= even_sum +a[i];
      else
          odd_sum=odd_sum+a[i];
    }
    printf("The sum of even numbers is %d \n",even_sum);
    printf("The sum of odd numbers is %d",odd_sum);
    return 0;
}
