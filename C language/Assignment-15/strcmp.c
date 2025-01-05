#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20],res;
    printf("Enter the first string:");
    gets(a);
    printf("Enter the second string:");
    gets(b);
    res=strcmp(a,b);
    if(res==0)
        printf("String are same");
    else if(res==-1)
        printf("String are in dictionary order");
    else
        printf("String are not in dictionary order");
}
