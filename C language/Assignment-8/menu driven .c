#include<stdio.h>
main()
{
    char choice;
    int a,b,c;

    printf("Enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("Enter the operation to perform from the menu given below\n");
    printf("a.To check numbers are lengths of isosceles triangle or not\n");
    printf("b.To check numbers are lengths of right angled triangle or not\n");
    printf("c.To check numbers are lengths of equilateral triangle or not\n");
    fflush(stdin);
    scanf("%c",&choice);

    switch(choice)
    {
    case 'a':
        if(a==b && a!=c)
            printf("Yes");
        else if(a==c && a!=b)
            printf("Yes");
        else if(b==c && b!=a)
            printf("Yes");
        else
            printf("Not isosceles");
        break;
    case 'b':
        if((a^2+b^2==c^2)||(a^2+c^2==b^2))
            printf("Right angled triangle");
            else if(b^2+c^2==a^2)
            printf("Right angled triangle");
        else
            printf("No");
        break;

    case 'c':
       if(a==b && a==c)
        printf("Equilateral triangle");
       else
        printf("no\n");
       break;
    default:
        printf("Please enter the right choice");
    }
    getchar();
}
