#include<stdio.h>
int main()
{
    int number1,number2;
    printf("\n enter any two nos.of your choice:");
    scanf("%d %d",&number1,&number2);

    if(number1>number2)
      printf("\n %d is greater than %d",number1,number2);
    else
    {
        if (number2>number1)
          printf("\n %d is greater than %d",number2,number1);

        else
        printf("\n both numbers are same");  
    }
     return 0;
}