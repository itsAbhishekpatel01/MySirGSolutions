#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],pattern[20];
    int i,j,flag=0,a;
    printf("Enter any string:");
    gets(s);
     printf("Enter the pattern:");
    gets(pattern);
   a=strlen(pattern);
   printf("%d",a);
    for(i=0;s[i];i++)
    {
        if(s[i]==pattern[0])
        {
            for(j=0;j<a;j++)
            {
                if(s[i]==pattern[j])
                    continue;
                else
                    break;
            }
            if(j==(a-1))
            flag=1;
        }
    }
    if(flag==1)
        printf("%s is found in %s ",pattern,s);
    else
        printf("%s is not found in %s ",pattern,s);
    return 0;
}
