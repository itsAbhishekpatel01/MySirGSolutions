#include<stdio.h>
#include<conio.h>
int main()
{
  struct Date
  {
      int day;
      char month[20];
      int year;
  }a1;

  printf("Enter the date :");
  scanf("%d",&a1.day);
  printf("Enter month:");
  scanf("%s",&a1.month);
  printf("Enter the year");
  scanf("%d",&a1.year);

  printf("The date is %d-%s-%d",a1.day,a1.month,a1.year);
  return 0;
}
