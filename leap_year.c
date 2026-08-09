#include<stdio.h>
int main()
{
    int y;
    printf("\n enter a year:");
    scanf("%d",&y);

    if((y %400 == 0) || (y %4 == 0 && y %100 != 0))
      printf("\n Leap Year");
    else
      printf("\n Not a leap year");


      return 0;
}