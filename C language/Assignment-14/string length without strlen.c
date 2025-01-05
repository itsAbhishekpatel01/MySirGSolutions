#include<stdio.h>
#include<string.h>
 main()
{
    char s[20];
    int i;
    printf("Enter the string:");
    gets(s);
    for(i=0;s[i];i++);
    printf("The length of string %s is %d",s,i);
    return 0;
}
