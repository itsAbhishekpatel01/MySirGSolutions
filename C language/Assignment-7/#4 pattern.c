#include<stdio.h>
main()
{
    int i,j,k=1,l;
    for(i=1;i<=4;i++)
    {
        for(j=1;j>=k;j++)
        {
            printf("*");
        }
        k=k+2;
         printf("\n");
        for(l=1;l<=(i);l++)
         printf(" ");
    }
   return 0;
}

