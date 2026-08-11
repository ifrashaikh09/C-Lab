#include<stdio.h>
int main()
{
    int a[20],i,sum=0;

    printf("\n enter any 20 numbers:");

    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

     printf("\n sum of all numbers:%d",sum);
     return 0;

}