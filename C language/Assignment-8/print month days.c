#include<stdio.h>
main()
{
    int n;
  printf("Enter the month number:");
  scanf("%d",&n);
  switch(n)
  {
  case 1:
    printf("The are 31 days in January.");
    break;

     case 2:
    printf("The are 28 days or 29 days(in leap year) in February.");
    break;

     case 3:
    printf("The are 31 days in March.");
    break;

     case 4:
    printf("The are 30 days in April.");
    break;

     case 5:
    printf("The are 31 days in May.");
    break;

     case 6:
    printf("The are 30 days in June.");
    break;

     case 7:
    printf("The are 31 days in July.");
    break;

     case 8:
    printf("The are 31 days in August");
    break;

     case 9:
    printf("The are 30 days in September.");
    break;

     case 10:
    printf("The are 31 days in October.");
    break;

     case 11:
    printf("The are 30 days in November.");
    break;

     case 12:
    printf("The are 31 days in December.");
    break;
  }
    return 0;
}
