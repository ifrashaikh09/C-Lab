#include<stdio.h>
int main()
{
    int a[4]={1,2,3,4};
    int b[4];

    for( int i=0;i<4;i++)
    {
        b[i]=a[4-i-1];

    }
     printf("\n Reverse Array:");

     for(int i=0;i<4;i++)
     {
        printf("\n %d",b[i]);

     }

     return 0;

}