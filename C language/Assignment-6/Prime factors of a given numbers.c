#include<stdio.h>
main()
{
    int  i,j,n;
     printf("Enter the number:");
     scanf("%d",&n);
     printf("All prime factors of %d are printed below:\n",n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0 )
        {
        for(j=2;j<=i;j++)
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d\n",i);
    }
    return 0;
}
