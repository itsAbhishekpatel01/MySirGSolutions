#include<stdio.h>
main()
{
    int  i,n;
     printf("Enter the number:");
     scanf("%d",&n);
     printf("All factors of %d are printed below:\n",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d\n",i);
    }
    return 0;
}
