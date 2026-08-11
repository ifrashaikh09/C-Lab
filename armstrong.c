#include<stdio.h>
int main()
{
    int n,r,i,sum=0,no;
    printf("\n enter any number:");
    scanf("%d",&n);
    no=n;

    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;

    }

    printf("\nsum of the cube of digits:%d",sum);
    if(no==sum)
     printf("\n Armstrong");
    else
     printf("\n not an armstrong");

     return 0;
}