#include<stdio.h>

main()
{
    int a[10],i,sum=0;
    float avg;
    printf("Enter the 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        sum=sum+a[i];
    avg=sum/10.0;
    printf("The average of 10 numbers is %.2f",avg);
    return 0;
}
