#include<stdio.h>
int main()
{
    int a[4],b[4];

    printf(" Enter any 4 elements of array:\n");

    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<4;i++)
    {
        b[i]=a[4-i-1];
    }
    for(int i=0;i<4;i++)
    {
        printf("\n %d",b[i]);
    }
    return 0;
    

    



}