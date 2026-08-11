#include<stdio.h>
int main()
{
    int a[3],i,j;

    printf("\n Enter any three numbers:");

    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<3;i++)
    {
        printf("\n Table of %d:",a[i]);

        for(j=1;j<=10;j++)
        {
            printf("\n %d*%d=%d",a[i],j,a[i]*j);
        }
    }

    return 0;
}