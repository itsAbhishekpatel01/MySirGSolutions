#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],i;
    printf("Enter the string:");
    gets(s);
    for(i=0;s[i];i++)
        if(s[i]>=65 && s[i]<=90)
            s[i]+=32;
    puts(s);
}
