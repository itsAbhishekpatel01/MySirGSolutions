#include<stdio.h>
main()
{
    int  i,j;
     printf("All prime numbers under 100 are printed below:\n");
    for(i=1;i<=100;i++)
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
