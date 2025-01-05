#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,count=0;
    printf("Enter the  string:");
    gets(s);
    for(i=0; s[i]; i++)
    {
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U' || )
            count++;
    }
    printf("The numbers of vovels is %d",count);
    return 0;
}
