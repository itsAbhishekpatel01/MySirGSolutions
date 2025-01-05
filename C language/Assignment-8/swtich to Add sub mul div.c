#include<stdio.h>
main()
{
    char choice;
    int n1,n2,sum,sub,mul,div;

    printf("Enter the two numbers:");
    scanf("%d%d",&n1,&n2);
    printf("Enter the operation to perform from the menu given below\n");
    printf("a.Addition\n");
    printf("b.Substraction\n");
    printf("c.Multiplication\n");
    printf("d.Division\n");
    fflush(stdin);
    scanf("%c",&choice);

    switch(choice)
    {
    case 'a':
        sum=n1+n2;
        printf("The sum of %d and %d is %d",n1,n2,sum);
        break;

    case 'b':
        if(n1>=n2)
        {
            sub=n1-n2;
            printf("The substraction of %d and %d is %d",n1,n2,sub);
            break;
        }
        else
        {
            sub=n2-n1;
            printf("The substraction of %d and %d is %d",n2,n1,sub);
            break;
        }

    case 'c':
        mul=n1*n2;
        printf("The multiplication of %d and %d is %d",n1,n2,mul);

    case 'd':
        if(n1>n2)
        {
            div=n1/n2;
            printf("The division of %d and %d is %d",n1,n2,div);
            break;
        }
        else
            div=n2/n1;
        printf("The division of %d and %d is %d",n1,n2,div);
        break;

    default:
        printf("Please enter the right choice");
    }
    getchar();
}
