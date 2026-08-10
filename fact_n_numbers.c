#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("\n enter any number:");
    scanf("%d",&n);
    
    i=1;
    while(i<=n)
    {
        printf("\n %d",i);
        fact=fact*i;
        i++;
    }
     
    printf("\n fact of %d:%d",n,fact);
    return 0;
}