#include<stdio.h>
#include<conio.h>
struct quadrant
{
    int x;
    int y;
} a1;
int main()
{
    int res;
    printf("Enter the value of x and y co-ordinates:");
    scanf("%d%d",&a1.x,&a1.y);
    res=checkquad(&a1.x,&a1.y);
    if(res!=0)
        printf("Given co-ordinates lies in quadrant %d",res);
    else
        printf("Given co-ordinates lies on the axes");
               return 0;
    }
int checkquad(int *p,int *q)
{
    int quad=0;
    if(*p>0 && *q>0 )
        quad=1;
    else if (*p<0 && *q>0)
        quad=2;
    else if(*p<0 && *q<0)
        quad=3;
    else if(*p>0 && *q<0)
        quad=4;
    else if(*p==0 || *q==0)
        quad==0;
    return (quad);
}


/*#include<stdio.h>
#include<conio.h>
struct quadrant
{
    int x;
    int y;
};
int main()
{
    struct quadrant a1;
    int res;
    printf("Enter the value of x and y co-ordinates:");
    scanf("%d%d",&a1.x,&a1.y);
    res=checkquad(&a1.x,&a1.y);


        return 0;

}
int checkquad(int *p,int *q)
{
   if(*p>0 && *q>0)
        printf("1");

    else if(*p<0 && *q>0)
        printf("2");

    else if(*p<0 && *q<0)
        printf("3");

    else if(*p>0 && *q<0)
        printf("4");

        else if(*p==0 || *q==0)
        printf("axes");

}*/
