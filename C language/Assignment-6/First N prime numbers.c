#include<stdio.h>
main()
{
    int  i,j,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
     printf("All prime numbers upto %d are printed below:\n",n);
    for(i=1;i<=n;i++)
    {
       for(j=2;j<=i;j++)
       {
           if(i%j==0)
            break;
       }
       if(i==j)
        printf("%d\n",i);
    }
    return 0;
}
