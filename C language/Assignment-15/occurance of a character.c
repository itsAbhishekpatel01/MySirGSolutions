#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],c;
    int i,count=0;
    printf("Enter any string:");
    gets(s);
    printf("Enter the character:");
    scanf("%c",&c);
    for(i=0; s[i]; i++)
        if(s[i]==c)
            count++;
    printf("%c occurs %d times in %s",c,count,s);
    return 0;
}
