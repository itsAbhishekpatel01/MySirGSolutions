#include<stdio.h>
#include<string.h>
 main()
{
    char s[20];
    int length;
    printf("Enter the string:");
    gets(s);
   length=strlen(s);
    printf("The length of string %s is %d",s,length);
    return 0;
}
