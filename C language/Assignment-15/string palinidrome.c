#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],ori[20];
    printf("Enter any string:");
    gets(s);
    strcpy(ori,s);
    strrev(s);
    if(strcmp(s,ori)==0)
    printf("%s is palindrome",ori);
    else
            printf("%s is not palindrome",ori);
    return 0;
}
