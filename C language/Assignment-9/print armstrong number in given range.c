#include<stdio.h>
#include<math.h>

int count_digit(int);
int check_armstrong(int);

int main()
{
    int i,l,u;
    printf("Enter the lower limit:");
    scanf("%d",&l);
    printf("Enter the upper limit:");
    scanf("%d",&u);
    for(i=l; i<=u; i++)
    {
        if(check_armstrong(i))
            printf("%d\n",i);
    }
    return 0;
}

int check_armstrong(int a)
{
    int ori,power,sum=0,rem;
    ori=a;
    power=count_digit(a);
    while(a>=1)
    {
        rem=a%10;
        sum=sum+pow(rem,power);
        a/=10;
    }

    if(ori==sum)
        return 1;
    return 0;
}


int count_digit(int num)
{
    int count=0;
    while(num!=0)
    {
        num=num/10;
        ++count;
    }
    return count;

}
