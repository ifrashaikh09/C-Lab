#include<stdio.h>
int main()
{
   int num,d1,d2,d3;
   printf("\n enter any number:");
   scanf("%d",&num);

   d1=num%10;
   num=num/10;

   d2=num%10;
   num=num/10;

   d3=num%10;
   num=num/10;

   printf("\n reverse digits:%d %d %d",d1,d2,d3);

   return 0;

}