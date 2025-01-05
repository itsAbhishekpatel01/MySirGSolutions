#include<stdio.h>
#include<string.h>
 main()
{
    char s[20],c;
    int i,freq=0;
    printf("Enter the string:");
    gets(s);
    printf("Enter the character to find the occurance of:");
    c=getchar();
    for(i=0;s[i];i++)
       {
        if(s[i]==c)
        freq++;
       }
    printf("%c occured %d times",c,freq);
    return 0;
}
