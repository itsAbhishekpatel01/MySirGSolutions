#include<stdio.h>
#include<string.h>
int main()
{
   char s[50];
   printf("Enter the string:");
   gets(s);
   revstr(s);
    return 0;
}
void revstr(char x[])
{
    int i,l=0,vis=0;
    char temp[20];
    for(i=0;x[i];i++)
        l++;
        for(i=0;i<l;i++)
        if(x[i]==32)
        x[i]='\0';
      for(i=vis;x[i];i++)
        {
           strcpy(temp,x);
            vis++;
             puts(temp);
        }


}
