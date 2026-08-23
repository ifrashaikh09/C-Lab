#include<stdio.h>
int main()
{
    int n,i,j;
    printf("\n All prime numbers:");

    for(j=1;j<=50;j++)
    {
        n=j;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
              break;
            }
        }
    
    if (i==n)
     printf("\n%d",j);
    }
    return 0;

}