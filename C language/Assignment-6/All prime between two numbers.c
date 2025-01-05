#include<stdio.h>
main()
{
    int l,u,i,j;
    printf("Enter the lower limit:");
    scanf("%d",&l);
    printf("Enter the upper limit:");
    scanf("%d",&u);
     printf("All prime numbers from %d to %d are printed below:\n",l,u);
    for(i=l;i<=u;i++)
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
