int cmpstr(char[],char[]);
int main()
{
    char a[20],b[20];
    printf("Enter the first string: ");
    gets(a);
    printf("Enter the second string:");
    gets(b);
    if(cmpstr(a,b))
        printf("Strings are same");
    else
        printf("Strings are not same");
    return 0;
}
int cmpstr(char x[],char y[])
{
    int flag;
    strupr(x);
    strupr(y);
    flag=strcmp(x,y);
    if (flag==0)
        return 1;
    else
        return 0;

}
