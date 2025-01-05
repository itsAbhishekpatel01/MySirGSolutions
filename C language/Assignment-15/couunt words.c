#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],count=1;
    int i,vis=0;
    printf("Enter the string:");
    gets(s);
    for(i=0;s[i];i++)
        if(s[i]==32 && s[i+1]!=32)
        count++;
    printf("There are %d words in the string",count);
    return 0;
}
