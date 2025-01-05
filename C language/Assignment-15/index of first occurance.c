#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],c;
    int i;
    printf("Enter any string:");
    gets(s);
    printf("Enter the character:");
    scanf("%c",&c);
    for(i=0; s[i]; i++)
        if(s[i]==c)
            break;
    printf("The first occurance of %c in %s is at index %d",c,s,i);
    return 0;
}
