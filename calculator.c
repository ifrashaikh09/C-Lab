#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("\n1) Addition");
    printf("\n2) Substraction");
    printf("\n3) Multiplication");
    printf("\n4) Division");

    printf("\n enter any choice:");
    scanf("%d",&ch);

    if(ch >=1 && ch <=4)
    {
        printf("\n enter any two numbers:");
        scanf("%d %d",&a,&b);
    
    }
    switch(ch)
    {
    case 1:
      printf("\n Ans=%d",a+b);
      break;

    case 2:
      printf("\n Ans=%d",a-b);
      break;
      
    case 3:
      printf("\n Ans=%d",a*b);
      break;
      
    case 4:
      printf("\n Ans=%d",a/b);
      break;

    default:
      printf("\n invalid choice");
    }

    printf("\n End of Program");

    return 0;

}