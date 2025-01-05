#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],i;
    printf("Enter the string:");
    gets(s);
    for(i=0;s[i];i++)
        if(s[i]>=97 && s[i]<=122)
            s[i]-=32;
    puts(s);
}
