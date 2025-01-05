#include<stdio.h>
#include<string.h>
 main()
{
    char s[20];
    int i,x=0,temp;
    printf("Enter the string:");
    gets(s);
    for(i=0;s[i];i++)
        x++;
     for(i=1;i<=x/2;i++)
   {
       temp=s[x-i];
         s[x-i]=s[i-1];
         s[i-1]=temp;
   }
   puts(s);
    return 0;
}
