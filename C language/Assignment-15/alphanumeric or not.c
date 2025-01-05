#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int flag=0,i;
    printf("Enter any string:");
    gets(s);
    for(i=0;s[i];i++)
        if(s[i]>=48 && s[i]<=57)
        flag=1;
    if(flag==1)
        printf("%s is an alphanumeric string",s);
    else
        printf("%s is  not an alphanumeric string",s);
    return 0;
}
