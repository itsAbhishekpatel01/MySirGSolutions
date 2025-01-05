#include<stdio.h>
main()
{
    int n;
  printf("Enter the day number:");
  scanf("%d",&n);
  switch(n)
  {
  case 1:
    printf("Good Morning\n\tIt's Sunday\n\t Have a nice day.");
    break;

     case 2:
        printf("Good Morning\n\tIt's Monday\n\t Have a nice day.");
    break;

     case 3:
        printf("Good Morning\n\tIt's Tuesday\n\t Have a nice day.");
    break;

     case 4:
        printf("Good Morning\n\tIt's Wednesday\n\t Have a nice day.");
    break;

     case 5:
       printf("Good Morning\n\tIt's Thursday\n\t Have a nice day.");
    break;
     case 6:
        printf("Good Morning\n\tIt's Friday\n\t Have a nice day.");
    break;

     case 7:
       printf("Good Morning\n\tIt's Saturday\n\t Have a nice day.");
    break;
  }
    return 0;
}
