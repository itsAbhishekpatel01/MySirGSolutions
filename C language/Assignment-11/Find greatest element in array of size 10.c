#include<stdio.h>

main()
{
    int a[10],i,grt;
    printf("Enter the 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        grt=a[i]>a[i+1]?a[i]:a[i+1];
    printf("The greatest number is %d",grt);
    return 0;
}
