#include<stdio.h>
int main()
{
     int i,n,sum=0;
     printf("\n enter any number:");
     scanf("%d",&n);

     i=1;
     while(i<=n)
     {
        printf("\n %d",i);
        sum=sum+i;
        i++;
     }

       printf("\n sum of all values:%d",sum);
       return 0;
}