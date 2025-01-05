#include<stdio.h>

main()
{
    int a[10],i,sml;
    printf("Enter the 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=9;i<=0;i--)
        if(a[i]<=a[i+1])
        sml=a[i+1];
    else
        sml=a[i];
    printf("The smallest number is %d",sml);
    return 0;
}
