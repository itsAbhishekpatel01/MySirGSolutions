#include<stdio.h>

int remove_digit(int,int);
int reverse(int);

main()
{
    int n,digit,new_num;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("Enter the digit to remove from the number:");
    scanf("%d",&digit);
    new_num=remove_digit(n,digit);
    new_num=reverse(new_num);
    printf("New number after removing the occurance of %d is %d",digit,new_num);
    return 0;

}

int remove_digit(int a,int b)
{
    int rem,num=0;
    while(a!=0)
    {
         rem=a%10;
        if(rem!=b)
        {
            num=(num*10)+rem;
        }
        a=a/10;
    }
    return num;
}

int reverse(int a)
{
    int rem,num=0;
    while(a!=0)
    {
        rem=a%10;
        num=(num*10)+rem;
        a=a/10;
    }
    return num;
}
