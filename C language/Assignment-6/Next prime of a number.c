#include<stdio.h>
main()
{
    int n,i,j;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=n;i>=1;i++)
    {
       for(j=2;j<=i;j++)
       {
           if(i%j==0)
            break;
       }
       if(i==j && i>n)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
