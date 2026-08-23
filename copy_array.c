#include<stdio.h>
int main()
{
    int a[4],b[4];
    printf("\n Enter any 4 elements of array:");

    for( int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);

    }
    for (int i=0;i<4;i++)
    {
        b[i]=a[i];
     
    }
    printf("\n Array b:");

    for(int i=0;i<4;i++)
    {
        printf("\n %d",b[i]);

    }
    return 0;
}    
