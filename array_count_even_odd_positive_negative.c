#include<stdio.h>
int main()
{
   int a[20];
   int i,even=0,odd=0,positive=0,negative=0;

   printf("\n enter 20 numbers:");
   
   for(i=0;i<20;i++)
   {
    scanf("%d",&a[i]);

    if(a[i]%2==0)
       even++;

    else
      odd++;

    if(a[i]>0)
      positive++;

    else if(a[i]<0)
      negative++;
   }
    printf("\n Even numbers:%d",even);
    printf("\n Odd numbers:%d",odd);
    printf("\n Positive numbers:%d",positive); 
    printf("\n Negative numbers:%d",negative);

    return 0;
   
}