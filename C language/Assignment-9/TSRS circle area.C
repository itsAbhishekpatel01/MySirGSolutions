#include<stdio.h>

float circle_area(float);
main()
{
  float r,area;
  printf("Enter the radius of the circle:");
  scanf("%f",&r);
  area=circle_area(r);
  printf("The area of the circle is %.2f",area);
  return 0;
}

float circle_area(float n )
{
    float area;
    area=(22.0/7)*(n*n);
    return area;
}
