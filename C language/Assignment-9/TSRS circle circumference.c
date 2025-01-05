#include<stdio.h>

float circum(float);

 main()
{
    float r,res;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    res=circum(r);
    printf("The circumference of the circle is %f",res);
    return 0;
}
float circum(float n)
{
    float result;
    result=2*3.14*n;
    return result;
}
